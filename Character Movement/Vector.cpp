#include "Vector.h"
namespace Player {

    Vector::Vector()
    {
    }

    Vector::Vector(float X, float Y)
     :x(X),y(Y)
    {
    }

    Point Point::AddVector(Vector v)
    {
        Point p2;
        p2.x = x + v.x;
        p2.y = y + v.y;
        return p2;
    }



    Vector operator-(Point a, Point b)
    {
        Vector v;
        v.x = a.x - b.x;
        v.y = a.y - b.y;
        return v;
    }

  
  

    float Vector::LengthSqrt() const
    {
        float length;
        length =(x * x + y * y);

        return length;
    }
    float Vector::Length() const
    {
        float length;
        length =sqrt(x * x + y * y);

        return length;
    }

    Vector Vector::operator/(float s) const
    {
        Vector scaled;
        scaled.x = x / s;
        scaled.y = y / s;
        return scaled;
    }

    Vector Vector::operator*(float s) const
    {
        Vector scaled;
        scaled.x = x * s;
        scaled.y = y * s;
        return scaled;
    }
 
}


