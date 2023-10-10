#include "trapezoid.h"
#include <iostream>
using namespace std;
trapezoid::trapezoid(double a, double b, double h)
{
	m_value1 = a;
	m_value2 = b;
	this->h = h;
}
void trapezoid::ShowArea()const
{
	cout << "S: " << (m_value1 + m_value2) * h / 2 << endl;
}
