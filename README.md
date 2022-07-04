# SparkIO3

Latest spark library rationalised for a single device

With changes to the interface


Connect to devices:

```
connect_to_all();
```

Start the Spark library:

```
spark_start(false);
```

In loop:

Process messages from the app and the amp:

```
connect_spark();  // will try to reconnect if the Spark had disconnected - without a new bluetooth scan()

spark_process();
app_process();
```

Get messages from app and amp:

```
app_msg_in.get_message(&cmdsub, &msg, &preset);
spark_msg_in.get_message(&cmdsub, &msg, &preset);
```

Send messages to app and amp (some examples):

```
app_msg_out.send_firmware_version(0x01050466);  
app_msg_out.send_preset_number(0x00, 0x01);
spark_msg_out.create_preset(&silvership);
```

Full message set is:
```
void create_preset(SparkPreset *preset);
void turn_effect_onoff(char *pedal, bool onoff);
void change_hardware_preset(uint8_t preset_num);
void change_effect(char *pedal1, char *pedal2);
void change_effect_parameter(char *pedal, int param, float val);
void get_serial();
void get_name();
void get_hardware_preset_number();
void get_preset_details(unsigned int preset);
void save_hardware_preset(uint8_t preset_num);
void send_firmware_version(uint32_t firmware);
void send_0x022a_info(byte v1, byte v2, byte v3, byte v4);  
void send_preset_number(uint8_t preset_h, uint8_t preset_l);
void send_key_ack();
void send_serial_number(char *serial);
```



