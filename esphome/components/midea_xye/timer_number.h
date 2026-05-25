#pragma once

#include "esphome/components/number/number.h"
#include "timer_interface.h"

namespace esphome {
namespace midea {
namespace xye {

class TimerStartNumber : public number::Number {
 public:
  TimerStartNumber() = default;
  void set_parent(TimerInterface *parent) { this->parent_ = parent; }
  void control(float value) override {
    this->publish_state(value);
    if (parent_)
      parent_->set_timer_start(value);
  }
 protected:
  TimerInterface *parent_{nullptr};
};

class TimerStopNumber : public number::Number {
 public:
  TimerStopNumber() = default;
  void set_parent(TimerInterface *parent) { this->parent_ = parent; }
  void control(float value) override {
    this->publish_state(value);
    if (parent_)
      parent_->set_timer_stop(value);
  }
 protected:
  TimerInterface *parent_{nullptr};
};

}  // namespace xye
}  // namespace midea
}  // namespace esphome
