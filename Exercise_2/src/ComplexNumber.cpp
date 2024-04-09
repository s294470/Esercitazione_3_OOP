#include "ComplexNumber.hpp"


namespace ComplexNumberLibrary
{

    ostream& operator<<(ostream& os, const ComplexNumber &c)  // stampa
    {
        if (c.imaginary == 0 && c.real == 0)
            os << "0" << endl;
        else if (c.imaginary == 0 && c.real !=0)
            os << c.real << endl;
        else if (c.imaginary != 0 && c.real == 0)
            os << c.imaginary << "i" << endl;
        else if (c.real != 0 && c.imaginary < 0)
            os << c.real << c.imaginary << "i" << endl;
        else
            os << c.real << "+" << c.imaginary << "i" << endl;
        return os;
    }


    ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)  // somma
    {
        ComplexNumber c(c1.real + c2.real, c1.imaginary + c2.imaginary);
        return c;
    }


    const double tol = 1.1*pow(10, -16);
    bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)    // verifica uguaglianza
    {
        return (fabs(c1.real - c2.real) < tol) && (fabs(c1.imaginary -c2.imaginary) < tol);

    }

    ComplexNumber ComplexNumber::conjugate()     // complesso coniugato
    {
        return ComplexNumber(real, -imaginary);
    }




}

