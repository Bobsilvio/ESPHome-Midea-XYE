#pragma once

namespace esphome {
namespace midea {
namespace xye {

class TimerInterface {
 public:
  virtual void set_timer_start(float hours) = 0;
  virtual void set_timer_stop(float hours) = 0;
};

}  // namespace xye
}  // namespace midea
}  // namespace esphome
