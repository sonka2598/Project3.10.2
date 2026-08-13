#include "triangle.h"

Triangle::Triangle(double aa, double bb, double cc, double AA, double BB, double CC)
    : a(aa), b(bb), c(cc), A(AA), B(BB), C(CC)
{
    name = "Треугольник";
    sides_count = 3;
}

void Triangle::print_info()
{
    Figure::print_info();
    cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c
         << " Углы: A = " << A << ", B = " << B << ", C = " << C << ".\n" << endl;
}