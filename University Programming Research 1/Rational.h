#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED
class Rational
{
    public:
        int numerator , denominator;
    Rational();
    Rational(int n , int d);
    void Reduce();
    Rational add(Rational a);
    Rational sub(Rational a);
    Rational mul(Rational a);
    Rational div(Rational a);
    void fractionprint ();
    void floatingprint ();
    bool operator==(Rational a);
    bool operator!=(Rational a);
};
#endif // RATIONAL_H_INCLUDED
