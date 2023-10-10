#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "trapezoid.h"
#include "Square.h"
#include "Parallelogram.h"
#include <iostream>
using namespace std;
int main()
{
    int v;
    cout << "1.Rectangle\n2.Triangle\n3.Circle\n4.prapezoid\n5.Square\n6.Parallelogram\n-->";
    cin >> v;

    Figure* ptr = nullptr;
    switch (v)
    {
    case 1:
        ptr = new Rectangle();
        ptr->SetDimension(10, 5);
        break;
    case 2:
        ptr = new Triangle();
        ptr->SetDimension(10, 15);
        break;
    case 3:
        ptr = new Circle();
        ptr->SetDimension(10);
        break;
    case 4:
        ptr = new trapezoid(5, 15, 6);
        break;
    case 5:
        ptr = new Square();
        ptr->SetDimension(10, 15);
        break;
    case 6:
        ptr = new Parallelogram(10, 11);
        break;
    default:
        break;
    }
    ptr->ShowArea();
    delete ptr;





    return 0;
}