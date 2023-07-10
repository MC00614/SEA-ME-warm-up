#include "LKAS.h"
#include <iostream>

LKAS::LKAS() : Status() {std::cout<<"LKAS Constructor\n";};

LKAS::~LKAS() {std::cout<<"LKAS Destructor\n";};

void LKAS::LKAS_SteeringAngle(int lkas_steering_angle)
{
    (*steering_angle) = lkas_steering_angle;
};

void LKAS::LKAS_Speed(int lkas_speed)
{
    (*speed) = lkas_speed;
};