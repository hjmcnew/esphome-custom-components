#include "esphome/core/log.h"
#include "sen0395.h"

namespace esphome {
namespace sen0395 {

static const char *TAG = "sen0395.sensor";

SEN0395Component::SEN0395Component();
DFRobot_mmWave_Radar sensor(&SEN0395Component);

void SEN0395Component::setup() {
    sensor.factoryReset();    //Restore to the factory settings 
    sensor.DetRangeCfg(0, 9);    //The detection range is as far as 9m
    sensor.OutputLatency(0, 0);
}

void SEN0395Component::update() {

}

void SEN0395Component::loop() {
    int val = sensor.readPresenceDetection();
    this->sensor->publish_state(var);
    ESP_LOGCONFIG(TAG, val)
}

void SEN0395Component::dump_config(){
    ESP_LOGCONFIG(TAG, "DFRobot SEN0395 sensor");
}

}  // namespace sen0395
}  // namespace esphome