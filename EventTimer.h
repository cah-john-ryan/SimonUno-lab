#ifndef EVENTTIMER_H
#define EVENTTIMER_H

#include <Arduino.h>

class EventTimer {
  private:
    unsigned long interval_;
    unsigned long nextFire_;

  public:
    EventTimer(unsigned long interval);

    bool hasEventFired();
    void reset();
};

#endif /* EVENTTIMER_H */
