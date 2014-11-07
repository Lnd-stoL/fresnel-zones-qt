#include "complex.h"

#include <cmath>

Complex::Complex (double re,
                  double im) :
    re (re),
    im (im)
{

}

double Complex::sqAbs () {
    return re*re + im*im;
}

double Complex::abs () {
    return sqrt (sqAbs ());
}

Complex Complex::operator *= (double k)
{
    re *= k;
    im *= k;
    return *this;
}

Complex Complex::operator += (Complex c)
{
    re += c.re;
    im += c.im;
    return *this;
}
