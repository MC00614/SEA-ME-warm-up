#pragma once
#include "Status.h"

class LKAS : public Status
{
public:
    LKAS();
    ~LKAS();

    void LKAS_SteeringAngle(int lkas_steering_angle);
    void LKAS_Speed(int lkas_speed); 
};