//
// Created by David Kadish on 24/05/2023.
//

#include "OversamplingSensor.h"

OversamplingSensor::OversamplingSensor(int interval, int measureInterval) : IntervalSensor(interval, nullptr),
                                                                            measureInterval(measureInterval) {}
