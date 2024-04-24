//
// Created by David Kadish on 14/11/2018.
//

#include "IntervalSensor.h"

IntervalSensor::IntervalSensor(int interval) : _interval(interval), m_filepath("")
{
}

IntervalSensor::IntervalSensor(int interval, const char *filepath) : _interval(interval), m_filepath(filepath)
{
}

#ifndef DESKTOP_NATIVE
void IntervalSensor::writeTimestamp(stream_t *f)
{
  if (f)
  {
    f->printf("%d-%d-%d %d:%02d:%02d, ", year(), month(), day(), hour(), minute(), second());
  }
}
#endif

void IntervalSensor::loop()
{
#ifndef DESKTOP_NATIVE
  if (chrono.hasPassed(_interval * 1000L, true))
  {
    process();
    record();
  }
#endif
}
