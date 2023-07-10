#pragma once
#include "Status.h"
#include "DriverInput.h"
#include "LKAS.h"

class Car : public Status
{
public:
    DriverInput *driverinput;
    LKAS *lkas;
    Car();
    ~Car(); 
};