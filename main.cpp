#include <Windows.h>

#include "triangle.h"
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "quadrangle.h"
#include "rectanglee.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

using namespace std;

void print_info(Figure* fig) {
    fig->print_info();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle tri(10, 20, 30, 50, 60, 70);
    RightTriangle rt(10, 20, 30, 50, 60);
    IsoscelesTriangle iso(10, 20, 50, 60);
    EquilateralTriangle eq(30);
    Quadrangle quad(10, 20, 30, 40, 50, 60, 70, 80);
    Rectanglee rect(10, 20);
    Square sq(20);
    Parallelogram par(20, 30, 30, 40);
    Rhombus rhomb(30, 30, 40);

    print_info(&tri);
    print_info(&rt);
    print_info(&iso);
    print_info(&eq);
    print_info(&quad);
    print_info(&rect);
    print_info(&sq);
    print_info(&par);
    print_info(&rhomb);

    return 0;
}
