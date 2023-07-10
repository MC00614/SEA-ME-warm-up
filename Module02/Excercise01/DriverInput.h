#pragma once
#include "Status.h"
class DriverInput : public Status
{
public:
    DriverInput();
    ~DriverInput();

    void Driver_SteeringAngle(int driver_steering_angle);
    void Driver_Speed(int driver_speed);
};