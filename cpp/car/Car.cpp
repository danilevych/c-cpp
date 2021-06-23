#include "Car.h"
#include "Point.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    this->fuelAmount = capacity;
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}
Car::~Car() {
    std::cout << "destructing car" << std::endl;
}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}
double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}
double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}
const Point& Car::getLocation() const {
    return this->location;
}
const std::string& Car::getModel() const {
    return this->model;
}
void Car::drive(const Point& destination) {
    double fuelNeeded = this->location.distance(destination) * this->fuelConsumption;

    if ( fuelAmount >= fuelNeeded ) {
        fuelAmount -= fuelNeeded;
        location = destination;
    }
}
void Car::drive(double x, double y) {
    Point distance(x, y);
    double fuelNeeded;

    this->location.distance(distance) * this->fuelConsumption;

    if ( fuelAmount >= fuelNeeded ) {
        fuelAmount -= fuelNeeded;
        location = distance;
    }
}
void Car::refill(double fuel) {
    if ( fuel + this->fuelAmount > this->fuelCapacity ) {
        throw new ToMuchFuel();
    } else if ( fuel < 0 ) {
        std::cout << "Error" << std::endl;
        return;
    }
    this->fuelAmount += fuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << car.getFuelAmount() << std::endl;
    out << car.getFuelCapacity() << std::endl;
    out << car.getFuelConsumption() << std::endl;
    return out;
}
