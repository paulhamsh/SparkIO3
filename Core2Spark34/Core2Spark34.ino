#define M5_BRD

#ifdef M5_BRD
#include <M5Core2.h> 
#else
#include "heltec.h"
#endif

#include "Spark.h"
#include "SparkIO.h"

#define PGM_NAME "Sparker v33"


SparkPreset mypreset0{0x00,0x00,"F7079063-94A9-41B1-AB1D-02CBC5D00790","MyPreset1","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", false, 3, {0.138313, 0.224643, 0.000000}}, 
  {"LA2AComp", true, 3, {0.000000, 0.852394, 0.373072}}, 
  {"Booster", false, 1, {0.722592}}, 
  {"RolandJC120", false, 5, {0.632231, 0.281820, 0.158359, 0.671320, 0.805785}}, 
  {"Cloner", false, 2, {0.199593, 0.000000}}, 
  {"VintageDelay", false, 4, {0.378739, 0.425745, 0.419816, 1.000000}}, 
  {"bias.reverb", false, 7, {0.285714, 0.408354, 0.289489, 0.388317, 0.582143, 0.650000, 0.200000}} },0xb4 };

SparkPreset mypreset1{0x00,0x03,"0F079063-94A9-41B1-AB1D-02CBC5D00790","MyPreset2","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", false, 3, {0.138313, 0.224643, 0.000000}}, 
  {"LA2AComp", true, 3, {0.000000, 0.852394, 0.373072}}, 
  {"Booster", false, 1, {0.722592}}, 
  {"RolandJC120", true, 5, {0.632231, 0.281820, 0.158359, 0.671320, 0.805785}}, 
  {"Cloner", true, 2, {0.199593, 0.000000}}, 
  {"VintageDelay", false, 4, {0.378739, 0.425745, 0.419816, 1.000000}}, 
  {"bias.reverb", true, 7, {0.285714, 0.408354, 0.289489, 0.388317, 0.582143, 0.650000, 0.200000}} },0xb4 };

SparkPreset mypreset2{0x00,0x02,"07F79063-94A9-41B1-AB1D-02CBC5D00790","MyPreset3","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", false, 3, {0.138313, 0.224643, 0.000000}}, 
  {"LA2AComp", true, 3, {0.000000, 0.852394, 0.373072}}, 
  {"Booster", false, 1, {0.722592}}, 
  {"RolandJC120", true, 5, {0.632231, 0.281820, 0.158359, 0.671320, 0.805785}}, 
  {"Cloner", true, 2, {0.199593, 0.000000}}, 
  {"VintageDelay", false, 4, {0.378739, 0.425745, 0.419816, 1.000000}}, 
  {"bias.reverb", true, 7, {0.285714, 0.408354, 0.289489, 0.388317, 0.582143, 0.650000, 0.200000}} },0xb4 };

SparkPreset mypreset3{0x00,0x03,"070F9063-94A9-41B1-AB1D-02CBC5D00790","MyPreset4","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", true, 3, {0.138313, 0.224643, 0.000000}}, 
  {"LA2AComp", true, 3, {0.000000, 0.852394, 0.373072}}, 
  {"Booster", true, 1, {0.722592}}, 
  {"RolandJC120", true, 5, {0.632231, 0.281820, 0.158359, 0.671320, 0.805785}}, 
  {"Cloner", true, 2, {0.199593, 0.000000}}, 
  {"VintageDelay", true, 4, {0.378739, 0.425745, 0.419816, 1.000000}}, 
  {"bias.reverb", true, 7, {0.285714, 0.408354, 0.289489, 0.388317, 0.582143, 0.650000, 0.200000}} },0xb4 };

SparkPreset mypreset4{0x00,0x03,"070F9063-94A9-41B1-AB1D-02CBC5D00790","MyPreset4","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", false, 3, {0.138313, 0.224643, 0.000000}}, 
  {"LA2AComp", false, 3, {0.000000, 0.852394, 0.373072}}, 
  {"Booster", false, 1, {0.722592}}, 
  {"RolandJC120", false, 5, {0.9, 0.9, 0.9, 0.9, 0.9}}, 
  {"Cloner", false, 2, {0.199593, 0.000000}}, 
  {"VintageDelay", false, 4, {0.378739, 0.425745, 0.419816, 1.000000}}, 
  {"bias.reverb", false, 7, {0.285714, 0.408354, 0.289489, 0.388317, 0.582143, 0.650000, 0.200000}} },0xb4 };

SparkPreset mypreset5{0x01,0x00,"070F9063-94A9-41B1-AB1D-02CBC5D00790","MyPreset4","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", true, 3, {0.138313, 0.224643, 0.000000}}, 
  {"LA2AComp", true, 3, {0.000000, 0.852394, 0.373072}}, 
  {"Booster", true, 1, {0.722592}}, 
  {"RolandJC120", true, 5, {0.9, 0.9, 0.9, 0.9, 0.9}}, 
  {"Cloner", true, 2, {0.199593, 0.000000}}, 
  {"VintageDelay", true, 4, {0.378739, 0.425745, 0.419816, 1.000000}}, 
  {"bias.reverb", true, 7, {0.285714, 0.408354, 0.289489, 0.388317, 0.582143, 0.650000, 0.200000}} },0xb4 };

SparkPreset preset1{0x0,0x03,"CDE99591-C05D-4AE0-9E34-EC4A81F3F84F","Sweet Memory","0.7","1-Clean","icon.png",120.000000,{ 
  {"bias.noisegate", false, 3, {0.099251, 0.570997, 0.000000}}, 
  {"BlueComp", false, 4, {0.430518, 0.663291, 0.355048, 0.557014}}, 
  {"DistortionTS9", false, 3, {0.058011, 0.741722, 0.595924}}, 
  {"94MatchDCV2", true, 5, {0.528926, 0.500905, 0.246163, 0.417119, 0.782293}}, 
  {"Flanger", false, 3, {0.413793, 0.663043, 0.655172}}, 
  {"DelayRe201", true, 5, {0.097778, 0.312182, 0.485182, 0.369640, 1.000000}}, 
  {"bias.reverb", true, 7, {0.561185, 0.506659, 0.417857, 0.300847, 0.602287, 0.594118, 0.000000}} },0xeb };

SparkPreset preset2{0x0,0x03,"F577F7F3-E8E0-4D35-8975-0427C2054DCE","Dancing in the room","0.7","Description for Blues Preset 1","icon.png",120.000000,{ 
  {"bias.noisegate", false, 2, {0.283019, 0.304245}}, 
  {"Compressor", true, 2, {0.325460, 0.789062}}, 
  {"Booster", false, 1, {0.666735}}, 
  {"Twin", true, 5, {0.613433, 0.371715, 0.453167, 0.676660, 0.805785}}, 
  {"ChorusAnalog", true, 4, {0.185431, 0.086409, 0.485027, 0.567797}}, 
  {"DelayEchoFilt", false, 5, {0.533909, 0.275554, 0.455372, 0.457702, 1.000000}}, 
  {"bias.reverb", true, 7, {0.508871, 0.317935, 0.461957, 0.349689, 0.339286, 0.481753, 0.700000}} },0x48 };

  
SparkPreset preset3{0x0,0x7f,"F577F7F3-E8E0-4D35-8975-0427C2054DCE","Dancing in the room","0.7","Description for Blues Preset 1","icon.png",120.000000,{ 
  {"bias.noisegate", false, 2, {0.283019, 0.304245}}, 
  {"Compressor", true, 2, {0.325460, 0.789062}}, 
  {"Booster", false, 1, {0.666735}}, 
  {"Twin", true, 5, {0.613433, 0.371715, 0.453167, 0.676660, 0.805785}}, 
  {"ChorusAnalog", true, 4, {0.185431, 0.086409, 0.485027, 0.567797}}, 
  {"DelayEchoFilt", false, 5, {0.533909, 0.275554, 0.455372, 0.457702, 1.000000}}, 
  {"bias.reverb", true, 7, {0.508871, 0.317935, 0.461957, 0.349689, 0.339286, 0.481753, 0.700000}} },0x48 };

SparkPreset preset4{0x01,0x00,"F577F7F3-E8E0-4D35-8975-0427C2054DCE","Dancing in the room","0.7","Description for Blues Preset 1","icon.png",120.000000,{ 
  {"bias.noisegate", false, 2, {0.283019, 0.304245}}, 
  {"Compressor", true, 2, {0.325460, 0.789062}}, 
  {"Booster", false, 1, {0.666735}}, 
  {"Twin", true, 5, {0.613433, 0.371715, 0.453167, 0.676660, 0.805785}}, 
  {"ChorusAnalog", true, 4, {0.185431, 0.086409, 0.485027, 0.567797}}, 
  {"DelayEchoFilt", false, 5, {0.533909, 0.275554, 0.455372, 0.457702, 1.000000}}, 
  {"bias.reverb", true, 7, {0.508871, 0.317935, 0.461957, 0.349689, 0.339286, 0.481753, 0.700000}} },0x48 };


SparkPreset preset5{0x01,0x00,"F577F7F3-E8E0-4D35-8975-0427C2054DCE","Dancing in the room","0.7","Description for Blues Preset 1","icon.png",120.000000,{ 
  {"bias.noisegate", false, 2, {0.283019, 0.304245}}, 
  {"Compressor", true, 2, {0.325460, 0.789062}}, 
  {"Booster", false, 1, {0.666735}}, 
  {"Twin", true, 5, {0.613433, 0.371715, 0.453167, 0.676660, 0.805785}}, 
  {"ChorusAnalog", true, 4, {0.185431, 0.086409, 0.485027, 0.567797}}, 
  {"DelayEchoFilt", false, 5, {0.533909, 0.275554, 0.455372, 0.457702, 1.000000}}, 
  {"bias.reverb", true, 7, {0.508871, 0.317935, 0.461957, 0.349689, 0.339286, 0.481753, 0.700000}} },0x48 };

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

  spark_start(true);

  spark_msg_out.change_hardware_preset(0x00, 0x03);
  spark_process();   
  app_msg_out.change_hardware_preset(0x00, 0x03);
  app_process(); 
}

bool ichanged = false;

void loop() {
  // put your main code here, to run repeatedly:
#ifdef M5_BRD
M5.update();
#endif


  connect_spark();  // reconnects if any disconnects happen

#ifdef M5_BRD
  if (M5.BtnA.wasPressed() ) {
    Serial.println("BUTTON A PRESS");

  }

  if (M5.BtnB.wasPressed() ) {
    Serial.println("BUTTON B PRESS");
    
    spark_msg_out.change_effect("RolandJC120","Twin");   
    spark_msg_out.save_hardware_preset(0x00, 0x03);
    spark_process();
   
    app_msg_out.save_hardware_preset(0x00, 0x03);
    app_process();
    app_msg_out.change_hardware_preset(0x00, 0x00);
    app_process();
    app_msg_out.change_hardware_preset(0x00, 0x03);
    app_process();

  }

  if (M5.BtnC.wasPressed() ) {
    Serial.println("BUTTON C PRESS");
    sp_bin.pass_through = false;
    app_bin.pass_through = false;
    
    spark_msg_out.change_effect("Twin", "RolandJC120");   
    spark_process();
    delay(1000);
    spark_msg_out.save_hardware_preset(0x00, 0x03);
    spark_process();

    sp_bin.pass_through = true;
    app_bin.pass_through = true;
            
    app_msg_out.save_hardware_preset(0x00, 0x03);
    app_process();
    app_msg_out.change_hardware_preset(0x00, 0x00);
    app_process();
    app_msg_out.change_hardware_preset(0x00, 0x03);
    app_process();


  }
#endif

  spark_process();
  app_process();
  
  if (spark_msg_in.get_message(&cmdsub, &msg, &preset)) { //there is something there   
    Serial.print("From Spark: ");
    Serial.println(cmdsub, HEX);
  }

  if (app_msg_in.get_message(&cmdsub, &msg, &preset)) { //there is something there   
    Serial.print("From App:   ");
    Serial.println(cmdsub, HEX);
  }
/*
    switch (cmdsub) {
      case 0x0101:
       Serial.println(preset.Name);
       Serial.println(preset.UUID); 
       Serial.println(preset.Description);         
       for (i=0;i<7;i++) {
          Serial.println(preset.effects[i].EffectName);
       }
        break;
      case 0x0115:
        Serial.print("On off  ");
        Serial.print(msg.str1);
        if (msg.onoff) Serial.println("On"); else Serial.println("Off");
        app_msg_out.send_ack(0x0415);        
        break;
      case 0x0138:
        app_msg_out.send_ack(0x0438);
        break;
      case 0x022f:
        Serial.println("Requested Firmware");
        app_msg_out.send_firmware_version(0x01050466);  
        break;
      case 0x022a:
        Serial.println("Requested mystery info");
        app_msg_out.send_0x022a_info(0x7D, 0x87, 0x07, 0x58);       
//        app_msg_out.send_0x022a_info(0x7D, 0x87, 0xCF, 0x58);       
        break;
      case 0x0210:
        Serial.println("Requested hardware preset number");
        app_msg_out.send_preset_number(0x00, 0x03);
        break;
     case 0x0223:
        app_msg_out.send_serial_number("S040C205A64");
        break;
     case 0x0170:
        Serial.println("App sent key");
        app_msg_out.send_key_ack();
        break;
        
     case 0x0201:
        Serial.print("Requested preset details ");
        Serial.print(msg.param1, HEX);
        Serial.print(" ");
        Serial.println(msg.param2, HEX);
        switch (msg.param2) {
          case 0:
            app_msg_out.create_preset(&mypreset0);
            break;
          case 1:
            app_msg_out.create_preset(&mypreset1);
            break;
          case 2:
            app_msg_out.create_preset(&mypreset2);
            break;
          case 3:
            if (!ichanged) 
              app_msg_out.create_preset(&mypreset3);
            else
              app_msg_out.create_preset(&mypreset4);
            break;
        }
        break;
    }

  }
*/  

}
