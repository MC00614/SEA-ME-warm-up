#include <iostream>

class Car
{
public:
    std::string make;
    std::string model;
    int year;

    Car();
    Car(std::string make, std::string model, int year);
    Car(const Car& car);
    Car& operator=(const Car& car);
    void drive();
    ~Car();
};

Car::Car()
{
    make = "Default";
    model = "Default";
    year = 0000;
    std::cout<<"Default constructor with no information called"<<std::endl;
}

Car::Car(std::string make, std::string model, int year)
{
    this->make = make;
    this->model = model;
    this->year = year;
    std::cout<<"Default constructor with given information called"<<std::endl;
}

Car::Car(const Car& car)
{
    this->make = car.make;
    this->model = car.model;
    this->year = car.year;
    std::cout << "Copy constructor called" << std::endl;
}
 
Car& Car::operator=(const Car& car)
{
    this->make = car.make;
    this->model = car.model;
    this->year = car.year;
    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

void Car::drive(){
    std::cout<<make<<'\t'<<model<<'\t'<<year;
    std::cout << "Drive function of Car class is called" << std::endl;
}

Car::~Car()
{
    std::cout<<"Destructor called"<<std::endl;
}


class SportsCar : public Car{
public:
    int topspeed;
    SportsCar();
    SportsCar(std::string make, std::string model, int year, int topspeed);
    void drive();
};
SportsCar::SportsCar(){
    topspeed = 10;
    std::cout<<"Default constructor of SportsCar with no information called"<<std::endl;
}
SportsCar::SportsCar(std::string make, std::string model, int year, int topspeed){
    Car(make, model, year);
    this->topspeed = topspeed;
    std::cout<<"Default constructor of SportsCar with given information called"<<std::endl;
}

void SportsCar::drive(){
    std::cout<<this->topspeed;
    Car::drive();
    std::cout << "Drive function of Sports Car class is called" << std::endl;
}

int main(){
    Car car0;
    SportsCar car1;
    SportsCar car2 = car1;
    SportsCar car3;
    car3 = car2;
    return 0;
}