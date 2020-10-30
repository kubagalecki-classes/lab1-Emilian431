#include <cmath>
#include <iostream>

class Wektor2D
{
public:
    double x;
    double y;
    double wartosc;
    double norm() { return sqrt(pow(x, 2) + pow(y, 2)); }
    void drukuj() { std ::cout << "x=" << x << " y=" << y << " dlugosc=" << norm() << std ::endl; }
};

int main()
{
    Wektor2D  wsp;
    Wektor2D* p = &wsp;
    p->x        = 10;
    p->y        = 10;
    p->drukuj();
}
