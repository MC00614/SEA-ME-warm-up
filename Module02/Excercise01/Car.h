#pragma once
#include "Engine.h"
#include "Wheel.h"
#include "Brake.h"
#include "Transmission.h"

class Car {
public:
    Car();
    void printParts();
    ~Car();
    
private:
    Engine* engine_;
    Wheel* wheels_;
    Brake* brakes_;
    Transmission* transmission_;
};