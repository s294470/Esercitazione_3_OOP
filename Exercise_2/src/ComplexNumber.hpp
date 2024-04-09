#pragma once
#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary {
struct ComplexNumber
{
    double real;
    double imaginary;

    // costruttore
    ComplexNumber(double a, double b):
        real(a),
        imaginary(b)
    {}

    // costruttore di default
    ComplexNumber() = default;

    // metodo
    ComplexNumber conjugate();  // complesso coniugato

};





ostream& operator<<(ostream& os, const ComplexNumber &c);  // stampa

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);  // somma

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);  //verifica uguaglianza


}


