#include "complex.h"

#include <cmath>

Complex::Complex(double re,
                 double im) :
    re(re),
    im(im)
{

}

double Complex::sqAbs() {
    return this->re * this->re + this->im + this->im;
}

double Complex::abs() {
    return sqrt(this->sqAbs());
}

Complex Complex::operator *=(double k)
{
    this->re *= k;
    this->im *= k;
    return *this;
}

Complex Complex::operator +=(Complex c)
{
    this->re += c.re;
    this->im += c.im;
    return *this;
}
