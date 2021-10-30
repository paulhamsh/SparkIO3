#define M5_BRD

#ifdef M5_BRD
#include <M5Core2.h> 
#else
#include "heltec.h"
#endif

#include "Spark.h"
#include "SparkIO.h"

#define PGM_NAME "Sparker v20"


SparkPreset silvership{0x00,0x01,"07079063-94A9-41B1-AB1D-02CBC5D00790","Silver Ship","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", false, 3, {0.138313, 0.224643, 0.000000}}, 
  {"LA2AComp", true, 3, {0.000000, 0.852394, 0.373072}}, 
  {"Booster", false, 1, {0.722592}}, 
  {"RolandJC120", true, 5, {0.632231, 0.281820, 0.158359, 0.671320, 0.805785}}, 
  {"Cloner", true, 2, {0.199593, 0.000000}}, 
  {"VintageDelay", false, 4, {0.378739, 0.425745, 0.419816, 1.000000}}, 
  {"bias.reverb", true, 7, {0.285714, 0.408354, 0.289489, 0.388317, 0.582143, 0.650000, 0.200000}} },0xb4 };

unsigned int cmdsub;
SparkMessage msg;
SparkPreset preset;

bool triggered_pedal;
int  curr_preset;
int i;


void setup() {
  // put your setup code here, to run once:
  
#ifdef M5_BRD
  M5.begin();
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setTextSize(4);
  M5.Lcd.println(PGM_NAME);
 
#else
  Heltec.begin(true /*DisplayEnable Enable*/, false /*LoRa Enable*/, true /*Serial Enable*/);
  Heltec.display->clear();
  Heltec.display->drawString(0, 0, PGM_NAME);
  Heltec.display->display();
  Heltec.display->display();
#endif

  Serial.println("Started");
  curr_preset = 0;
  
  connect_to_all(); 

  spark_start(false);
}



void loop() {
  // put your main code here, to run repeatedly:
#ifdef M5_BRD
M5.update();
#endif

#ifdef M5_BRD
  if (M5.BtnA.wasPressed() ) {
    Serial.println("BUTTON PRESS");

//    sp_mout.change_hardware_preset(curr_preset);
    app_msg_out.change_hardware_preset(curr_preset);
    curr_preset++;
    if (curr_preset > 3) curr_preset = 0;
  }
#endif

//  sp_process();
  app_process();

/*
  if (sp_msg_in.get_message(&cmdsub, &msg, &preset)) { //there is something there
    Serial.print("From Spark: ");
    Serial.println(cmdsub, HEX);
    switch (cmdsub) {
      case 0x0301:
        break;
    
      
    }
  }
*/  
  if (app_msg_in.get_message(&cmdsub, &msg, &preset)) { //there is something there   
    Serial.print("From App: ");
    Serial.println(cmdsub, HEX);

    switch (cmdsub) {
      case 0x0101:
       Serial.println(preset.Name);
       Serial.println(preset.UUID); 
       Serial.println(preset.Description);         
       for (i=0;i<7;i++) {
          Serial.println(preset.effects[i].EffectName);
       }
        break;
      case 0x0138:
        break;
      case 0x022f:
        Serial.println("Requested Firmware");
        app_msg_out.send_firmware_version(0x01050466);  
        break;
      case 0x022a:
        Serial.println("Requested mystery info");
        app_msg_out.send_0x022a_info(0x7D, 0x87, 0x07, 0x58);       
        break;
      case 0x0210:
        Serial.println("Requested hardware preset number");
        app_msg_out.send_preset_number(0x00, 0x01);
        break;
     case 0x0223:
        app_msg_out.send_serial_number("S040C205A64");
        break;
     case 0x0170:
        Serial.println("App sent key");
        app_msg_out.send_key_ack();
        break;
        
     case 0x0201:
        Serial.println("Requested preset details");
        app_msg_out.create_preset(&silvership);        
        break;
    }
  }
  

  if (triggered_pedal) {
    triggered_pedal = false;
    Serial.println("Sending preset commands");
  }
}
