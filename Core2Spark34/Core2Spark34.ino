#include "Spark.h"
#include "SparkIO.h"

unsigned int cmdsub;
SparkMessage msg;
SparkPreset preset;

void setup() {
  Serial.begin(115200);
  
  connect_to_all(); 
  spark_start(true);
}


void loop() {
  connect_spark();  // reconnects if any disconnects happen

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
}
