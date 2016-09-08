/**
* Konstruktory konwertujace, obliczeniowe.
**/
#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void nowaLinia();

class Zespolona
{
private:

    double re, im;

public:

    Zespolona(double re=0, double im=0)
    {
        this->re = re;
        this->im = im;
    }

    void wyswietlDane()
    {
        cout << "Re: " << re << endl;
        cout << "Im: " << im << endl;
    }

    Zespolona operator + (const Zespolona & przeslanaInstancja)
    {
        Zespolona nowaInstancja(this->re + przeslanaInstancja.re, this->im + przeslanaInstancja.im);
        return nowaInstancja;
    }

    double getRe()
    {
        return re;
    }

    double getIm()
    {
        return im;
    }
};

class Suma
{
    Zespolona zespolonaSuma;

public:

    // Konstruktor obliczeniowy
    Suma(Zespolona zes1, Zespolona zes2)
    {
        zespolonaSuma = zes1 + zes2;
    }

    void wyswietlSume()
    {
        cout << "re: " << zespolonaSuma.getRe() << ", im: " << zespolonaSuma.getIm() << endl;
    }

};

void main15()
{
    Zespolona zes1 = Zespolona(1.2); // konwersja jawna
    zes1.wyswietlDane();

    nowaLinia();

    Zespolona zes2 = 3.2; // konwersja niejawna
    zes2.wyswietlDane();

    nowaLinia();

    Suma suma = Suma(zes1, zes2);
    suma.wyswietlSume();
}
