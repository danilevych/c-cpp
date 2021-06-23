#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    this->amount = capacity;
    this->capacity = capacity;
    this->isReady = true;
    this->model = model;
    this->totalShots = 0;
}
    
Gun::~Gun() {
    std::cout << "destructing gun" << std::endl;
}
    
int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    if ( this->isReady == true ) {
        this->isReady = false;
    } else if ( this->isReady == false ) {
        this->isReady = true;
    }
}
    
void Gun::reload() {
    this->amount = this->capacity;
}

void Gun::shoot() {
    if ( this->isReady = false ) {
        throw new NotReady();
    }
    if ( this->amount == 0 ) {
        throw new OutOfRounds();
    }
    this->amount -= 1;
    this->totalShots += 1;
    
    if ( amount == 0 ) {
        this->isReady == false;
    }
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << gun.getAmount() << std::endl;
    out << gun.getCapacity() << std::endl;
    out << gun.ready() << std::endl;
    out << gun.getModel() << std::endl;
    out << gun.getTotalShots() << std::endl;
    return out;
}
