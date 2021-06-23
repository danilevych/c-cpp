#include "Unit.h"

int main() {

    Unit hamster("Bobik", 100, 50);
    Unit buffalo("Rikardo", 100, 10);

    std::cout << "hamster Bobik: " << hamster << std::endl;
    std::cout << "buffalo Rikardo: " << buffalo << std::endl;

    hamster.attack(buffalo);

    std::cout << "hamster Bobik: " << hamster << std::endl;
    std::cout << "buffalo Rikardo: " << buffalo << std::endl;

    buffalo.addHitPoints(20);

    std::cout << "hamster Bobik: " << hamster << std::endl;
    std::cout << "buffalo Rikardo: " << buffalo << std::endl;

    hamster.attack(buffalo);
    hamster.attack(buffalo);
    hamster.attack(buffalo);
    hamster.attack(buffalo);

    std::cout << "hamster Bobik: " << hamster << std::endl;
    std::cout << "buffalo Rikardo: " << buffalo << std::endl;


	return 0;
}
