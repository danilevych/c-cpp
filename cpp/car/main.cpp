#include "Car.h"
#include "Point.h"

int main() {

    Car ford;
    Point point(10.0, 5.0);
    double fuel = 5.5;


    std::cout << "car Ford: " << ford << std::endl;

    std::cout << "Car.getFuelAmount - " << ford.getFuelAmount() << std::endl;
    std::cout << "Car.getFuelCapacity - " << ford.getFuelCapacity() << std::endl;
    std::cout << "Car.getFuelConsumption - " << ford.getFuelConsumption() << std::endl;

    std::cout << "________________________________________________" << std::endl;

    std::cout << "Car.getLocation - " << ford.getLocation() << std::endl;
    std::cout << "Car.getModel - " << ford.getModel() << std::endl;

    std::cout << "________________________________________________" << std::endl;

    ford.drive(point);
    std::cout << "Car.getLocation - " << ford.getLocation() << std::endl;
    std::cout << "________________________________________________" << std::endl;

    ford.drive(20.0, 20.0);
    std::cout << "Car.getLocation - " << ford.getLocation() << std::endl;
    std::cout << "________________________________________________" << std::endl;

    ford.refill(fuel);
    std::cout << "Car.getFuelAmount - " << ford.getFuelAmount() << std::endl;
    std::cout << "________________________________________________" << std::endl;


    return 0;
}
 
