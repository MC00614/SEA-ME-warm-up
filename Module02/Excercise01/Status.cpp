#include "Status.h"
#include <iostream>

Status::Status() : heading_angle(0), speed(0), location(0), steering_angle(0)
{std::cout<<"Status Contructor\n";};

Status::~Status() {std::cout<<"Status Destructor\n";};

void Status::HeadingAngle()
{
    (*heading_angle) += (*steering_angle)*(*speed);
}

void Status::Location()
{
    (*location) += (*heading_angle)*(*speed);
};