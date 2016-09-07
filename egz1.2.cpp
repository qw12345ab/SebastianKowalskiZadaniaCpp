#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void main12();
static void inkrementujLicznik();

/**
* Moja klasa zawierajaca m.in. konstruktor, destruktor.
**/
class MojaKlasa
{
private:
    string imie;
    string nazwisko;
    int wiek;

    int * wskaznikDoWieku;

public:
    static int licznik;
    // Konstruktor domniemany - nie ma nigdy ¿adnych argumentów
    MojaKlasa()
    {
        imie = "";
        nazwisko = "";
        wiek = 0;
        wskaznikDoWieku = &wiek;
    }
    MojaKlasa(string imie, string nazwisko, int wiek)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->wiek = wiek;
        wskaznikDoWieku = &(this->wiek);
        inkrementujLicznik();
    }

    // Konstruktor kopiuj¹cy
    MojaKlasa(MojaKlasa & mojaKlasa)
    {
        cout << "W konstruktorze kopiujacym" << endl;
        imie = mojaKlasa.imie;
        nazwisko = mojaKlasa.nazwisko;
        wiek = 50;
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

    void ustawWiekPoprzezWskaznik(int nowyWiek)
    {
        *wskaznikDoWieku = nowyWiek;
    }
};

// zdefiniowanie zmiennej statycznej
int MojaKlasa::licznik = 0;

// definicja metody statycznej
static void inkrementujLicznik()
{
    MojaKlasa::licznik++;
}

// definicja metody statycznej
static void wyswietlLicznik()
{
    cout << "Stan licznika: " << MojaKlasa::licznik << endl;
}

void main12()
{
    wyswietlLicznik();

    MojaKlasa mojaKlasa("Adam", "Nowak", 25);
    wyswietlLicznik();
    wyswietlGwiazdki();
    mojaKlasa.wyswietlDane();
    wyswietlGwiazdki();

    cout << "Kopiowanie obiektu" << endl;
    wyswietlLicznik();
    MojaKlasa mojaKlasaKopia = mojaKlasa;
    wyswietlLicznik();
    mojaKlasaKopia.wyswietlDane();
    wyswietlGwiazdki();

    MojaKlasa * nowaMojaKlasa = new MojaKlasa("Ania", "Kowalska", 24);
    wyswietlLicznik();
    nowaMojaKlasa->wyswietlDane();
    wyswietlGwiazdki();
    nowaMojaKlasa->usunObiekt();


    cout << "WSKAZNIKI" << endl;
    wyswietlGwiazdki();
    mojaKlasa.ustawWiekPoprzezWskaznik(60);
    mojaKlasa.wyswietlDane();

}


