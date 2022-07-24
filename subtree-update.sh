#!/bin/sh

set -e
set -u

git fetch adafruit-lis3dh master
git subtree pull --prefix Adafruit_LIS3DH adafruit-lis3dh master --squash
git fetch  dfrobot-mmwave-radar master
git subtree pull --prefix DFRobot_mmWave_Radar dfrobot-mmwave-radar master --squash
git fetch esphome-custom-component-examples master
git subtree pull --prefix esphome-custom-component-examples esphome-custom-component-examples master --squash

