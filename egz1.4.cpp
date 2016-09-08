/**
* Dziedziczenie i polimorfizm.
**/

#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void nowaLinia();

class Samochod
{
private:
    string marka;
    string informacjeDodatkowe;
    int rocznik;

public:

    Samochod(int rocznik, string informacjeDodatkowe)
    {
        this->rocznik = rocznik;
        this->informacjeDodatkowe = informacjeDodatkowe;
    }
    ~Samochod() {}

    void ustawMarke(string marka)
    {
        this->marka = marka;
    }

    void ustawRocznik(int rocznik)
    {
        this->rocznik = rocznik;
    }

    void ustawInformacjeDodatkowe(string informacjeDodatkowe)
    {
        this->informacjeDodatkowe = informacjeDodatkowe;
    }

    void wyswietlDane()
    {
        cout << "Marka: " << marka << endl;
        cout << "Rocznik: " << rocznik << endl;
        cout << "Informacje dodatkowe: " << informacjeDodatkowe << endl;
    }

    virtual void wyswietlOpinieKlienta() = 0;
};

class Opel : public Samochod
{
public:

    Opel(int rocznik, string informacjeDodatkowe) : Samochod(rocznik, informacjeDodatkowe)
    {
        ustawMarke("Opel");
        ustawRocznik(rocznik);
        ustawInformacjeDodatkowe(informacjeDodatkowe);
    };
    ~Opel(){}

    void usunObiekt()
    {
        delete this;
    }

    void wyswietlOpinieKlienta()
    {
        cout << "Opinia klienta: wszystko ok" << endl;
    }
};

void main14()
{
    Opel * opel = new Opel(2005, "bezwypadkowy");

    opel->wyswietlDane();
    opel->wyswietlOpinieKlienta();

    opel->usunObiekt();
}
