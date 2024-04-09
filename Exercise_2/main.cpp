#include "ComplexNumber.hpp"


using namespace ComplexNumberLibrary;



int main()
{
    ComplexNumber c1(7.4, 20);
    ComplexNumber c2(5.999, 8.03);

    // stampa
    cout << "c1 = " << c1 << "e c2 = " << c2 << endl;

    // calcolo dei coniugati

    ComplexNumber conj1 = c1.conjugate();
    ComplexNumber conj2 = c2.conjugate();


    cout << "Il coniugato di c1 e': " << conj1 << endl;
    cout << "Il coniugato di c2 e': " << conj2 << endl;


    // somma

    ComplexNumber sum = c1+c2;
    cout << "La somma di c1 e c2 e': " << sum << endl;


    // confronto
    if (c1 == c2)
        cout << "c1 e c2 coincidono" << endl;
    else
        cout << "c1 e c2 non coincidono" << endl;







    return 0;
}
