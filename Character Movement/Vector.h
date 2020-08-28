#pragma once
#include <iostream>

namespace Player {
    class Vector
    {
    public:
        Vector() {};
        Vector(float X, float Y);
        float LengthSqrt() const;
        float Length() const;
        Vector Normalized() const;
        float x, y;
        Vector operator+(const Vector& v) const;
        Vector operator-(const Vector& v) const;
        Vector operator/(float s) const;
        Vector operator*(float s) const;
    };

    class Point
    {
    public:
        Point() {};
        Point(float x, float y);
        Point AddVector(Vector v);
        float x, y;
    };

    Vector operator-(Point a, Point b);

}
