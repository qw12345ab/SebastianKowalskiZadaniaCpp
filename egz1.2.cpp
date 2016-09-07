#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void main12();

/**
* Moja klasa zawierajaca m.in. konstruktor, destruktor.
**/
class MojaKlasa
{
private:
    string imie;
    string nazwisko;
    int wiek;
public:
    // Konstruktor domniemany - nie ma nigdy ¿adnych argumentów
    MojaKlasa()
    {
        imie = "";
        nazwisko = "";
        wiek = 0;
    }
    MojaKlasa(string imie, string nazwisko, int wiek)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->wiek = wiek;
    }

    // Konstruktor kopiuj¹cy
    MojaKlasa(const MojaKlasa & mojaKlasa)
    {
        imie = mojaKlasa.imie;
        nazwisko = mojaKlasa.nazwisko;
        wiek = mojaKlasa.wiek;
    }

    /**
    * Destruktor.
    **/
    ~MojaKlasa()
    {
        cout << "Uruchomilem destruktor" << endl;
    }

    string zwrocImie()
    {
        return imie;
    }

    string zwrocNazwisko()
    {
        return nazwisko;
    }

    int zwrocWiek()
    {
        return wiek;
    }

    void wyswietlDane()
    {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Wiek: " << wiek << endl;
    }

    /**
    * Uruchamia destruktor.
    **/
    void usunObiekt()
    {
        delete this;
    }
};

void main12()
{
    MojaKlasa * mojaKlasa = new MojaKlasa("Adam", "Nowak", 25);
    wyswietlGwiazdki();
    mojaKlasa->wyswietlDane();
    wyswietlGwiazdki();

    MojaKlasa * mojaKlasa2 = mojaKlasa;
    mojaKlasa2->wyswietlDane();
    wyswietlGwiazdki();

    mojaKlasa->usunObiekt();
    // delete mojaKlasa; // rowniez powoduje uruchomienie destrktora
    mojaKlasa2->usunObiekt();

}


