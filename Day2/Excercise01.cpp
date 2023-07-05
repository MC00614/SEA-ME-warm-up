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
    Car();
    topspeed = 10;
}
SportsCar::SportsCar(std::string make, std::string model, int year, int topspeed){
    Car(make, model, year);
    this->topspeed = topspeed;
}

void SportsCar::drive(){
    std::cout<<this->topspeed;
    Car::drive();
}

int main(){
    Car car0;
    SportsCar car1;
    car1.year = 2;
    std::cout<<car1.topspeed<<std::endl;
    return 0;
}