#include "Part.h"
#include "Engine.h"
#include "Wheel.h"
#include "Brake.h"
#include "Transmission.h"
#include "Car.h"
#include <iostream>

int main() {
    Car myCar;
    myCar.printParts();
    return 0;
}