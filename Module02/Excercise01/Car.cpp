#include "Car.h"
#include <iostream>

Car::Car()
{   
    Status();
    driverinput = new DriverInput();
    lkas = new LKAS();

    lkas->speed = this->speed;
    driverinput->speed = this->speed;

    std::cout<<"Car Constructor\n";
};

Car::~Car()
{
    delete (DriverInput*) driverinput;
    delete (LKAS*) lkas;
    std::cout<<"Car Destructor\n";
};

// void Car::update_info()
// {
//     driverinput->speed = this->speed;
//     lkas->speed = this->speed;


//     driverinput-> = this->speed;
//     lkas->speed = this->speed;

//     driverinput->speed = this->speed;
//     lkas->speed = this->speed;

//     driverinput->speed = this->speed;
//     lkas->speed = this->speed;
//     std::cout<<driverinput->speed;
//     std::cout<<lkas->speed;
//     std::cout<<this->speed;
// }