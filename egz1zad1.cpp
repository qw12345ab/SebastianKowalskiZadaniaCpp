#include <iostream>
#include <string>

using namespace std;

void wyswietlGwiazdki();
void nowaLinia();

class l_zes {
      int re, im ;
public:
    l_zes (int i=0, int j=0)
    {
        re = i;
        im = j;
    }
    l_zes (const l_zes &);
    l_zes & operator =(const l_zes &);
    friend l_zes operator +(const l_zes & a, const l_zes & b);
    friend l_zes operator -(const l_zes & a, const l_zes & b);
    l_zes & operator +=(const l_zes & a);

    getRe()
    {
        return re;
    }

    getIm()
    {
        return im;
    }

    void wyswietlDane()
    {
        cout << re << ", " << im << endl;
    }
};

l_zes operator + (l_zes & zes1, l_zes & zes2)
{
    return l_zes(zes1.getRe() + zes2.getRe(), zes1.getIm() + zes2.getIm());
}

void main1z1()
{
    l_zes zes1(1, 5);
    l_zes zes2(2, 4);

    l_zes zes3 = zes1 + zes2;
    zes3.wyswietlDane();
}

