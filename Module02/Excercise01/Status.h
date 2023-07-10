#pragma once

class Status
{
public:
    int speed;
    int heading_angle;
    int location;
    int steering_angle;
    int *speed_ptr;
    int *heading_angle_ptr;
    int *location_ptr;
    int *steering_angle_ptr;
    Status();
    Status(int *speed_ptr, int *heading_angle_ptr, int *location_ptr, int *steering_angle_ptr);
    ~Status();

    void Speed(int speed);
    void HeadingAngle();
    void Location();
};