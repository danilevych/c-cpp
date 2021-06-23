#include "Complex.h"

Complex::Complex( double real, double imaginary ) {
	this->real=real;
	this->imaginary=imaginary;
}

Complex::~Complex() {}

	double Complex::getReal() const {
		return this->real;
	}

	double Complex::getImaginary() const {
		return this->imaginary;
	}

	bool Complex::operator==(const Complex& other) const {
		return this->real == other.real && this->imaginary == other.imaginary;
	}

	bool Complex::operator!=(const Complex& other) const {
		return this->real != other.real && this->imaginary != other.imaginary;
	}

	void Complex::operator+=(const Complex& other) {
		this->real += other.real;
    	this->imaginary += other.imaginary;
	}

	void Complex::operator-=(const Complex& other) {
		this->real -= other.real;
    	this->imaginary -= other.imaginary;
	}

	Complex Complex::operator+(const Complex& other) const {
		this->real + other.real;
    	this->imaginary + other.imaginary;
	}

	Complex Complex::operator-(const Complex& other) const {
		this->real - other.real;
    	this->imaginary - other.imaginary;
	}

	Complex Complex::operator*(const Complex& other) const {
		this->real * other.real;
    	this->imaginary * other.imaginary;
	}


std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << complex.real << "+" << complex.imaginary << "i";
    return out;
}
