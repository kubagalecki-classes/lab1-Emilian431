#include <cmath>
#include <iostream>

class Wektor2D
{
public:
    void   setX(double k) { x = k; }
    double getX() { return x; }
    void   setY(double l) { y = l; }
    double getY() { return y; }
    Wektor2D()
    {
        x = 0;
        y = 0;
        std ::cout << "Jestem domyslny x=" << x << " y=" << y << " wartosc=" << norm()
                   << std ::endl;
    }
    Wektor2D(double a, double b)
    {
        x = a;
        y = b;
        std ::cout << "Jestem parametryczny x=" << x << " y=" << y << " wartosc=" << norm()
                   << std ::endl;
    }
    double wartosc;
    double norm() { return sqrt(pow(x, 2) + pow(y, 2)); }
    void   drukuj() { std ::cout << "dlugosc=" << norm() << std ::endl; }

private:
    double x, y;
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D{w1.getX() + w2.getX(), w1.getY() + w2.getY()};
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return ((w1.getX() * w2.getX()) + (w1.getY() * w2.getY()));
}

int main()
{
    Wektor2D v1{2, 5};  // parametryczny
    Wektor2D v2{10, 4}; // parametryczny (x,y)
    Wektor2D vsum;
    double   vpro;
    vsum = v1 + v2;
    std ::cout << "x=" << vsum.getX() << " y=" << vsum.getY() << std ::endl;
    vpro = v1 * v2;
    std ::cout << "product=" << vpro << std ::endl;
}
