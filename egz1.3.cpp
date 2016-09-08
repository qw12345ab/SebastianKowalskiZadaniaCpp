#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void nowaLinia();

class Wektor
{
    int x;
    int y;

public:
    Wektor()
    {
        x = 0;
        y = 0;
    }
    Wektor (int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    Wektor operator + (const Wektor & przeslanaInstancja)
    {
        Wektor nowaInstancja(this->x + przeslanaInstancja.x, this->y + przeslanaInstancja.y);
        return nowaInstancja;
    }

    Wektor operator - (const Wektor & przeslanaInstancja)
    {
        Wektor nowaInstancja(this->x - przeslanaInstancja.x, this->y - przeslanaInstancja.y);
        return nowaInstancja;
    }

    Wektor operator * (const Wektor & przeslanaInstancja)
    {
        Wektor nowaInstancja(this->x * przeslanaInstancja.x, this->y * przeslanaInstancja.y);
        return nowaInstancja;
    }

    Wektor & operator += (const Wektor & przeslanaInstancja)
    {
        this->x += przeslanaInstancja.x;
        this->y += przeslanaInstancja.y;
        return * this;
    }

    Wektor & operator -= (const Wektor & przeslanaInstancja)
    {
        this->x -= przeslanaInstancja.x;
        this->y -= przeslanaInstancja.y;
        return * this;
    }

    Wektor & operator = (const Wektor & przeslanaInstancja)
    {
        this->x = przeslanaInstancja.x;
        this->y = przeslanaInstancja.y;
        return * this;
    }

    Wektor & operator ++()
    {
        this->x++;
        this->y++;
        return * this;
    }

    Wektor operator++(int)
    {
        Wektor wektor(*this);
        ++*this;
        return wektor;
    }

    Wektor & operator --()
    {
        this->x--;
        this->y--;
        return * this;
    }

    Wektor operator--(int)
    {
        Wektor wektor(*this);
        --*this;
        return wektor;
    }

    Wektor operator[](int indeks)
    {
        return * this;
    }

    Wektor operator()(int wartoscDoDodania)
    {
        return Wektor(x+wartoscDoDodania, y+wartoscDoDodania);
    }

    void ustawX(int x)
    {
        this->x = x;
    }

    int zwrocX()
    {
        return x;
    }

    void ustawY(int y)
    {
        this->y = y;
    }

    int zwrocY()
    {
        return y;
    }

    void wyswietlDane()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};

ostream & operator << (ostream & o, Wektor & wektor)
{
    return o << "Wektor: [" << wektor.zwrocX() << ", " << wektor.zwrocY() << "]";
}

istream & operator >> (istream & i, Wektor & wektor)
{
    int x;
    int y;
    i >> x >> y;
    wektor.ustawX(x);
    wektor.ustawY(y);
    return i;
}

void main13()
{
    Wektor wektor(5, 5);
    wektor.wyswietlDane();

    nowaLinia();
    Wektor wektor2(10, 20);
    Wektor wektor3 = wektor + wektor2;
    wektor3.wyswietlDane();

    nowaLinia();
    Wektor wektor4(5, 10);
    wektor3 += wektor4;
    wektor3.wyswietlDane();

    nowaLinia();
    wektor3 -= wektor4;
    wektor3.wyswietlDane();

    nowaLinia();
    wektor3 = wektor;
    wektor3.wyswietlDane();

    nowaLinia();
    wektor3++;
    wektor3.wyswietlDane();

    nowaLinia();
    wektor3--;
    wektor3.wyswietlDane();

    nowaLinia();
    Wektor tablicaWektorow[20];
    tablicaWektorow[0] = wektor3;
    tablicaWektorow[1] = wektor2;
    tablicaWektorow[1].wyswietlDane();

    nowaLinia();
    Wektor wektorPowiekszony = wektor2(30);

    cout << wektorPowiekszony << endl;

    nowaLinia();
    cout << "Podaj wspolrzedne x i y wektora: " << endl;
    cin >> wektor;
    cout << wektor << endl;
}
