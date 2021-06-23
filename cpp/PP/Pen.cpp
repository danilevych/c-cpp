#include "Pen.h"

Pen::Pen(int inkCapacity) {
    this->inkAmount = inkCapacity;
    this->inkCapacity = inkCapacity;
}

Pen::~Pen() {
	std::cout << "destructing pen" << std::endl;
}

int Pen::getInkAmount() const {
    return this->inkAmount;
}
int Pen::getInkCapacity() const {
    return this->inkCapacity;
}
void Pen::write(Paper& paper, const std::string& message) {
    int messageSize = message.size();
    
    // if ( paper.getSymbols() + messageSize > paper.getMaxSymbols() ) {
    //     throw new OutOfSpace();
    // }
    if ( messageSize <= this->inkAmount ) {
        paper.addContent(message);
        this->inkAmount -= messageSize;
    }
}
void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}
