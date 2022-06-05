#include <iostream>
#include "Rational.h"
#include <algorithm>
using namespace std;
//constructor
Rational::Rational()
{
 }
Rational::Rational(int nm , int dm)
{
int G =__gcd(nm,dm);
numerator=nm/G;
denominator=dm/G;
 }
//reduction function
void Rational::Reduce()
 {
 int G =__gcd(numerator,denominator);
 numerator=numerator/G;
 denominator=denominator/G;
 }
 //addition function
Rational Rational::add(Rational temp)
 {
 Rational b;
 b.numerator = numerator * temp.denominator + denominator * temp.numerator;
 b.denominator = denominator *temp.denominator;
 b.Reduce();
 return b;
 }
 //subtraction function
Rational Rational::sub(Rational temp)
 {
 Rational b;
 b.numerator = numerator * temp.denominator - denominator * temp.numerator;
 b.denominator = denominator * temp.denominator;
 b.Reduce();
 if (b.denominator<0)
 {
 b.denominator*=-1;
 b.numerator*=-1;
 }
 return b;
 }
 //multiplication function
Rational Rational::mul(Rational temp)
 {
 Rational b;
 b.numerator = numerator * temp.numerator;
 b.denominator = denominator * temp.denominator;
 b.Reduce();
 if (b.denominator<0)
 {
 b.denominator*=-1;
 b.numerator*=-1;
 }
 return b;
 }
 //division function
Rational Rational::div(Rational temp)
 {
 Rational b;
 b.numerator = numerator * temp.denominator;
 b.denominator = denominator * temp.numerator;
 b.Reduce();
 if (b.denominator<0)
 {
 b.denominator*=-1;
 b.numerator*=-1;
 }
 return b;
 }
 //printing functions
void Rational::fractionprint()
 {
 cout << numerator << "/" << denominator << endl ;
 }
void Rational::floatingprint()
 {
 double temp=double(numerator)/denominator ;
 cout << temp << endl ;
 }
 //overloading operators
bool Rational::operator==(Rational temp)
 {
 if (numerator==temp.numerator&&denominator==temp.denominator)
 return true;
 else return false;
 }
bool Rational::operator!=(Rational temp)
{
if (numerator!=temp.numerator||denominator!=temp.denominator)
return true;
else return false;
}
