/**
* Szablony klas.
**/
#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void nowaLinia();

// szbalon klasy
template <typename A, typename B>
class Kalkulator
{
    A par1;
    B par2;
public:
    Kalkulator(A par1, B par2)
    {
        this->par1 = par1;
        this->par2 = par2;
    }

    A dodaj()
    {
        return par1 + par2;
    }

    // szablon funkcji
    template<typename C>
    C dodaj(C par1, C par2)
    {
        return par1 + par2;
    }
};

void main16()
{
    Kalkulator <double, int> kalk = Kalkulator<double, int>(1.4, 2);
    cout << kalk.dodaj() << endl;
    cout << kalk.dodaj(3, 10) << endl;
}
