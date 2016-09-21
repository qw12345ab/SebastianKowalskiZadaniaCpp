#include <iostream>
#include <string>

using namespace std;

class X
{
public:

    virtual f(void){}
    f1(void){};

} x, *px;

class Y : public X
{
public:
    virtual f(void){}
    f1(void){};
} y, *py;

///////////////////////////////////////////////

/*class string
{
    int roz  ;  // d³ugoœæ napisu
    char *wsk;
public:
    string(char n[]);
    operator int () {return int;}
    operator char * () {return wsk;}
};*/

void main1z2()
{
    /*x = y;
    py = px; //  blad - niepoprawna konwersja z X* do Y*
    */

    /*
    y = x; // blad _ nie mozna przypisac obiektu bazowego do obiektu pochodnego
    py = px;*/

    x = y;
    px = py;
    //ok

    /*
    px=py;
    y=x; // blad - nie mozna przypisac typowi pochodnemu referencji typu bazowego*/

}
