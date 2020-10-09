#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    double tmpRe = this->re * other.re - this->im * other.im;
    double tmpIm = this->im * other.re + this->re * other.im;
    
    this->re = tmpRe;
    this->im = tmpIm;
}

Complex complexSum(Complex a, Complex b) {
    Complex result = a;
    
    complexIncrement(&result, b);
    return result;
}

Complex complexDiff(Complex a, Complex b) {
    Complex result = a;
    
    complexDecrement(&result, b);
    return result;
}

Complex complexProduct(Complex a, Complex b) {
    Complex c;
    
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.im * b.re + a.re * b.im;
    return c;
}

int complexEqual(Complex a, Complex b) {
    return a.re == b.re && b.im == b.im;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    if ( this.im < 0 ) {
        printf("%g%gi", this.re, this.im);
    } else {
        printf("%g+%gi", this.re, this.im);
    }
}
