#include <iostream>
#include <cmath>

class Car
{
public:
    std::string make;
    std::string model;
    int year;

    // Default constructor
    Car() 
    : make("Default"), model("Default"), year(0) {std::cout<<"Car Default constructor"<<'\n';};
    Car(std::string make, std::string model, int year) 
    : make(make), model(model), year(year) {{std::cout<<"Car Default constructor"<<'\n';}};

    // Copy constructor
    Car(const Car& car)
    : make(car.make), model(car.model), year(car.year) {std::cout << "Car Copy constructor" << '\n';};

    // Copy Assignment Operator
    Car& operator=(const Car& car) {std::cout << "Car Copy Assignmnet Operator" << '\n'; return *this = car;};

    // Destructor
    ~Car(){std::cout<<"Car Destructor called"<<'\n';};

    void drive();

    virtual void Accel(int power)=0;
    
};

void Car::drive(){
    std::cout<<make<<'\t'<<model<<'\t'<<year<<'\n';
    std::cout << "Drive function of Car class is called" << '\n';
}

class SportsCar : public Car{
public:
    int topspeed;
    int speed;

    // Default Constructor
    SportsCar()
    : Car(), topspeed(0), speed(0) {std::cout<<"SportsCar Default constructor"<<'\n';};
    SportsCar(std::string make, std::string model, int year, int topspeed, int speed)
    : Car(make, model, year), topspeed(topspeed), speed(speed) {std::cout<<"SportsCar Default constructor"<<'\n';};

    // Copy constructor
    SportsCar(const SportsCar& sportscar)
    : Car(sportscar), topspeed(sportscar.topspeed), speed(sportscar.speed) {std::cout << "SportsCar Copy constructor" << '\n';};

    // Copy Assignment Operator
    SportsCar& operator=(const SportsCar& sportscar) {std::cout << "SportsCar Copy Assignmnet Operator" << '\n'; return *this = sportscar;};

    // Destructor
    ~SportsCar(){std::cout<<"SportsCar Destructor called"<<'\n';};

    virtual void Accel(int power);
    void drive();
};

void SportsCar::Accel(int power)
{
    speed = power + sin(power);
    std::cout<<"SportsCar is Accelerating"<<'\n';
    if (speed>topspeed){
        speed = topspeed;    
        std::cout<<"Speed Limit"<<speed<<'\n';
    }
    std::cout<<"Speed is now"<<speed<<'\n';
}

void SportsCar::drive(){
    std::cout<<topspeed<<'\t';
    Car::drive();
    std::cout << "SportsCar Drive function\n";
}

class SUV : public Car
{
public:
    int torque;
    int speed;

    // Default Constructor
    SUV()
    : Car(), torque(0), speed(0) {std::cout<<"SUV Default constructor"<<'\n';};
    SUV(std::string make, std::string model, int year, int torque, int speed)
    : Car(make, model, year), torque(torque), speed(speed) {std::cout<<"SUV Default constructor"<<'\n';};

    // Copy constructor
    SUV(const SUV& suv)
    : Car(suv), torque(suv.torque), speed(suv.speed) {std::cout << "SUV Copy constructor" << '\n';};

    // Copy Assignment Operator
    SUV& operator=(const SUV& suv) {std::cout << "SUV Copy Assignmnet Operator" << '\n'; return *this = suv;};

    // Destructor
    ~SUV(){std::cout<<"SUV Destructor called"<<'\n';};

    virtual void Accel(int power);
    void drive();
};

void SUV::Accel(int power)
{
    speed = 0.5*power + 2*sin(power);
    std::cout<<"SUV is Accelerating"<<'\n';
    std::cout<<"Speed is now "<<speed<<'\n';
}

void SUV::drive(){
    std::cout<<torque<<'\t';
    Car::drive();
    std::cout << "SUV Drive function\n";
}

class Trailer
{
public:
    int weight;
    std::string type;

    // Default Constructor
    Trailer()
    : weight(100), type("Default"){std::cout<<"Trailer Default constructor"<<'\n';};
    Trailer(int weight, std::string type)
    : weight(weight), type(type){std::cout<<"Trailer Default constructor"<<'\n';};

    // Copy constructor
    Trailer(const Trailer& trailer)
    : weight(trailer.weight), type(trailer.type){std::cout << "Trailer Copy constructor" << '\n';};

    // Copy Assignment Operator
    Trailer& operator=(const Trailer& trailer) {std::cout << "Trailer Copy Assignmnet Operator" << '\n'; return *this = trailer;};

    // Destructor
    ~Trailer(){std::cout<<"Trailer Destructor called"<<'\n';};
};

class CampingCar : public SUV, public Trailer
{
public:
    // Default Constructor
    CampingCar()
    : SUV(), Trailer() {std::cout<<"CampingCar Default constructor"<<'\n';};
    CampingCar(std::string make, std::string model, int year, int torque, int speed, int weight, std::string type)
    : SUV(make, model, year, torque, speed), Trailer(weight, type) {std::cout<<"CampingCar Default constructor"<<'\n';};

    // Copy constructor
    CampingCar(const CampingCar& campingcar)
    : SUV(campingcar), Trailer(campingcar) {std::cout << "CampingCar Copy constructor" << '\n';};

    // Copy Assignment Operator
    CampingCar& operator=(const CampingCar& campingcar) {std::cout << "CampingCar Copy Assignmnet Operator" << '\n'; return *this = campingcar;};

    // Destructor
    ~CampingCar() {std::cout<<"CampingCar Destructor called"<<'\n';};

};

class SportsSUV : public Car
{
protected:
    SportsCar S_car;
    SUV SUV_car;
public:
    int topspeed;
    int torque;
    int speed;

    // Default Constructor
    SportsSUV()
    : Car(), S_car(make, model, year, topspeed=0, speed=0), SUV_car(make, model, year, torque=0, speed=0) {std::cout<<"SportsSUV Default constructor"<<'\n';};
    SportsSUV(std::string make, std::string model, int year, int topspeed, int torque, int speed)
    : Car(make, model, year), S_car(make, model, year, topspeed, speed), SUV_car(make, model, year, torque, speed) {std::cout<<"SportsSUV Default constructor"<<'\n';};

    // Copy constructor
    SportsSUV(const SportsSUV& sportssuv)
    : Car(sportssuv), topspeed(topspeed), torque(torque), speed(speed) {std::cout << "SportsSUV Copy constructor" << '\n';};

    // Copy Assignment Operator
    SportsSUV& operator=(const SportsSUV& sportssuv) {std::cout << "SportsSUV Copy Assignmnet Operator" << '\n'; return *this = sportssuv;};

    // Destructor
    ~SportsSUV() {std::cout<<"SportsSUV Destructor called"<<'\n';};

    virtual void Accel(int power);
};


void SportsSUV::Accel(int power)
{
    speed = 0.75*power + 1.25*sin(power);
    std::cout<<"SportsSUV is Accelerating\n";
    if (speed>topspeed){
        speed = topspeed;    
    }
    std::cout<<"Speed is now "<<speed<<'\n';
}


int main(){
    SportsCar sportscar;
    SUV suv;
    CampingCar camppingcar;
    SportsSUV sportssuv;
    return 0;
}