class Wektor2D
{
public:
    void   setX(double wx) { x = wx; }
    double getX() { return x; }
    void   setY(double wy) { y = wy; }
    double getY() { return y; }
    Wektor2D()
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double wx, double wy)
    {
        x = wx;
        y = wy;
    }
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
