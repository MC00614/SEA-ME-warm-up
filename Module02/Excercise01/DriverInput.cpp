#include "DriverInput.h"
#include <iostream>

DriverInput::DriverInput() : Status() {std::cout<<"DriverInput Constructor\n";};

DriverInput::~DriverInput() {std::cout<<"DriverInput Destructor\n";};

void DriverInput::Driver_SteeringAngle(int driver_steering_angle)
{
    (*steering_angle) = driver_steering_angle;
};

void DriverInput::Driver_Speed(int driver_speed)
{
    (*speed) = driver_speed;
};