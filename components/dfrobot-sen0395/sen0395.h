#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/uart/uart.h"
#include "../../DFRobot_mmWave_Radar/DFRobot_mmWave_Radar.h"

namespace esphome {
namespace sen0395 {

class SEN0395Component : public sensor::Sensor, public PollingComponent, public uart::UARTDevice {
 public:
  void setup() override;
  void update() override;
  void loop() override;
  void dump_config() override;
};

}  // namespace sen0395
}  // namespace esphome