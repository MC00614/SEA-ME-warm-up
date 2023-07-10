#pragma once
#include "Status.h"
#include "DriverInput.h"
#include "LKAS.h"

class Car : public Status
{
// private:
//     Status *driverinput;
//     Status *lkas;
public:
    Status *driverinput;
    Status *lkas;
    Car();
    ~Car();

    void update_info();
};