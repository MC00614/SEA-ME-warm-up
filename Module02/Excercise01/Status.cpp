#include "Status.h"
#include <iostream>

Status::Status() 
: speed(0), heading_angle(0), location(0), steering_angle(0)
{
    speed_ptr = &speed;
    heading_angle_ptr = &heading_angle;
    location_ptr = &location;
    steering_angle_ptr = &steering_angle;
    std::cout<<"Status Contructor\n";
};


Status::Status(int *speed_ptr, int *heading_angle_ptr, int *location_ptr, int *steering_angle_ptr) 
: speed(0), heading_angle(0), location(0), steering_angle(0)
{
    this->speed_ptr = speed_ptr;
    this->heading_angle_ptr = heading_angle_ptr;
    this->location_ptr = location_ptr;
    this->steering_angle_ptr = steering_angle_ptr;
    std::cout<<"Status Contructor\n";
};


Status::~Status() {std::cout<<"Status Destructor\n";};

// void Status::HeadingAngle()
// {
//     (*heading_angle) += (*steering_angle)*(*speed);
// }

// void Status::Location()
// {
//     (*location) += (*heading_angle)*(*speed);
// };

// void Status::Speed(int *speed)
// {
//     int* s = speed;
//     this->speed = s;
//     std::cout<<this->speed;
// }