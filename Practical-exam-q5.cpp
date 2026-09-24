#include <iostream>
#include <string>
 
class Vehicle {
public:
    virtual void startEngine() = 0;  
    virtual void drive() = 0;        
 
    virtual ~Vehicle() {}
};
 
class Car : public Vehicle {
public:
    void startEngine() override {
        std::cout << "Car: Turning the key... Engine started with a smooth \n";
    }
 
    void drive() override {
        std::cout << "Car: Driving on four wheels down the highway.\n";
    }
};
 
class Bike : public Vehicle {
public:
    void startEngine() override {
        std::cout << "Bike: Kick-starting the engine\n";
    }
 
    void drive() override {
        std::cout << "Bike: Zipping through traffic on two wheels.\n";
    }
};
 
int main() {

    Vehicle* vehicles[2];
    vehicles[0] = new Car();
    vehicles[1] = new Bike();
 
    for (int i = 0; i < 2; ++i) {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
        std::cout << "-----\n";
    }
 
    for (int i = 0; i < 2; ++i) {
        delete vehicles[i];
    }
 
    return 0;
}