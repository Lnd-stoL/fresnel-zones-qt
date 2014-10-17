#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    double re;
    double im;

    Complex(double re = 0.0,
            double im = 0.0);
    double sqAbs();
    double abs();
    Complex operator *=(double k);
    Complex operator +=(Complex c);
};

#endif // COMPLEX_H
