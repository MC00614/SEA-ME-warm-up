#pragma once

class Status
{
public:
    int *heading_angle;
    int *speed;
    int *location;
    int *steering_angle;
    Status();
    ~Status();

    void HeadingAngle();
    void Location();
};