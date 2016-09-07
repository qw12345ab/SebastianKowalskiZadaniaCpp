#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void main11();

/**
* Klasa obrazujaca znaczenie getterow i setterow oraz
* dostep do zmiennych skladowych.
**/
class A
{
private:
    int zmiennaInt = 1;
    string zmiennaString;

public:
    int getZmiennaInt()
    {
        return zmiennaInt;
    }

    void setZmiennaInt(int wartoscInt)
    {
        zmiennaInt = wartoscInt;
    }

    string getZmiennaString()
    {
        return zmiennaString;
    }

    void setZmiennaString(string napis)
    {
        zmiennaString = napis;
    }
};

void main11()
{
    wyswietlGwiazdki();

    cout << "Nazwa pliku: egz1.1" << endl;

    // ustawianie i zwracanie zmiennych
    A zmiennaA;

    wyswietlGwiazdki();

    cout << "Zmienna int: " << zmiennaA.getZmiennaInt() << endl;

    zmiennaA.setZmiennaInt(15);

    cout << "Zmienna int: " << zmiennaA.getZmiennaInt() << endl;

    wyswietlGwiazdki();

    cout << "Zmienna string: " << zmiennaA.getZmiennaString() << endl;

    zmiennaA.setZmiennaString("Witaj!");

    cout << "Zmienna string: " << zmiennaA.getZmiennaString() << endl;

    wyswietlGwiazdki();
}



