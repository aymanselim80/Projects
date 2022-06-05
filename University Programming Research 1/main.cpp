#include <iostream>
//#include "Rational.h"
#include "Rational.cpp"

using namespace std;


int main()
{
    Rational n1 (1,8);
    Rational n2 (3,15);
    Rational n3 (2,6);
    Rational n4 (40,120);

        //testing printing in fraction form function
    cout<<"Fraction no.1"<<endl;
    n1.fractionprint();
    cout<<"Fraction no.2"<<endl;
    n2.fractionprint();
    cout<<"Fraction no.3"<<endl;
    n3.fractionprint();
    cout<<"Fraction no.4"<<endl;
    n4.fractionprint();

        //printing in floating point form
    cout<<"Fraction no.1 in floating point form"<<endl;
    n1.floatingprint();
    cout<<"Fraction no.2 in floating point form"<<endl;
    n2.floatingprint();

        //summation function
    cout<<"the sum of first 2 fraction no.1&2"<<endl;
    Rational sum = n1.add(n2);
    cout << sum.numerator << "/" << sum.denominator <<endl ;

        //subtraction function
    cout<<"the substraction of fraction no.1&2"<<endl;
    Rational sub = n1.sub(n2);
    cout << sub.numerator << "/" << sub.denominator <<endl ;

        //multiplication  function
    cout<<"the multiplication of fraction no.1&2"<<endl;
    Rational mul = n1.mul(n2);
    cout << mul.numerator << "/" << mul.denominator <<endl ;

        //dividing function
    cout<<"the division of first fraction no.1&2"<<endl;
    Rational div = n1.div(n2);
    cout << div.numerator << "/" << div.denominator <<endl ;

        //testing overloading == operator
    if (n3==n4)
        cout << "fractions no.3&4 are equal" << endl << endl ;


        //testing overloading != operator
    if (n1!=n2)
        cout << "fractions no.3&4 are not equal" << endl << endl ;
    return 0;
}
