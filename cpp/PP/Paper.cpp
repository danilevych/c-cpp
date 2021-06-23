#include "Paper.h"
#include "Pen.h"

Paper::Paper(int maxSymbols) {
	this->maxSymbols = maxSymbols;
    this->symbols = maxSymbols;
    this->content = content;
}

Paper::~Paper() {
    std::cout << "destructing paper" << std::endl;
}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}
int Paper::getSymbols() const {
    return this->symbols;
}
void Paper::addContent(const std::string& message) {
    content.append(message);
    symbols = content.size();
}
void Paper::show() const {
     std::cout << content << std::endl;
}
