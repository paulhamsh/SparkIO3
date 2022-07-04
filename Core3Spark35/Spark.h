#ifndef Spark_h
#define Spark_h


#define DEBUG_ON

#ifndef DEB
  #ifdef DEBUG_ON
  // found this hint with __VA_ARGS__ on the web, it accepts different sets of arguments /Copych
  #define DEB(...) Serial.print(__VA_ARGS__) 
  #define DEBUG(...) Serial.println(__VA_ARGS__) 
  #else
  #define DEB(...)
  #define DEBUG(...)
  #endif
#endif


#include "SparkIO.h"

// variables required to track spark state and also for communications generally
unsigned int cmdsub;
SparkMessage msg;
SparkPreset preset;
SparkPreset presets[6];

enum spark_status_values {SPARK_DISCONNECTED, SPARK_CONNECTED, SPARK_COMMUNICATING, SPARK_CHECKSUM, SPARK_SYNCING, SPARK_SYNCED};
enum spark_ui_updates {UI_NONE, UI_CUSTOM, UI_HARDWARE};

spark_status_values spark_state;
spark_ui_updates ui_update_in_progress;
unsigned long spark_ping_timer;

bool spark_state_tracker_start();
bool update_spark_state();
void update_ui();

void change_comp_model(char *new_eff);
void change_drive_model(char *new_eff);
void change_amp_model(char *new_eff);
void change_mod_model(char *new_eff);
void change_delay_model(char *new_eff);

void change_noisegate_onoff(bool onoff);
void change_comp_onoff(bool onoff);
void change_drive_onoff(bool onoff);
void change_amp_onoff(bool onoff);
void change_mod_onoff(bool onoff);
void change_delay_onoff(bool onoff);
void change_reverb_onoff(bool onoff);

void change_noisegate_toggle();
void change_comp_toggle();
void change_drive_toggle();
void change_amp_toggle();
void change_mod_toggle();
void change_delay_toggle();
void change_reverb_toggle();

void change_noisegate_param(int param, float val);
void change_comp_param(int param, float val);
void change_drive_param(int param, float val);
void change_amp_param(int param, float val);
void change_mod_param(int param, float val);
void change_delay_param(int param, float val);
void change_reverb_param(int param, float val);

void change_hardware_preset(int pres_num);
void change_custom_preset(SparkPreset *preset, int pres_num);

void tuner_on_off(bool on_off);

#define AMP_GAIN 0
#define AMP_TREBLE 1
#define AMP_MID 2
#define AMP_BASS 3
#define AMP_MASTER 4

#endif
