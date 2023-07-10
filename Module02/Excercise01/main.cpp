#include "Status.h"
#include "DriverInput.h"
#include "LKAS.h"
#include "Car.h"
#include <iostream>

int main()
{   
    // int a = 1;
    // Status S;
    // S.speed=10;
    // std::cout<<*S.speed_ptr<<'\n';
    Car Ferrari;

    *(Ferrari.speed_ptr) = 100;
    std::cout<<Ferrari.speed<<'\n';
    // std::cout<<Ferrari.lkas->speed_ptr<<'\n';
    // std::cout<<Ferrari.speed_ptr<<'\n';
    std::cout<<*(Ferrari.speed_ptr)<<'\n';
    Ferrari.lkas->LKAS_Speed(1000);
    std::cout<<*(Ferrari.lkas->speed_ptr)<<'\n';
    std::cout<<(Ferrari.lkas->speed)<<'\n';
    // // (*(Ferrari.speed)) = 1;
    // std::cout<<Ferrari.speed;
    // (*Ferrari.lkas->speed) = 1;
    // std::cout<<Ferrari.lkas->speed;
    return 0;
}