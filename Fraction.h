#ifndef FRACTION_H
#define FRACTION_H



template<class T>
class Fraction{
public :
    Fraction();
    Fraction(T numeratorInput, T denominatorInput);
    ~Fraction();

private :
    T numerator;
    T denominator;
};
#endif