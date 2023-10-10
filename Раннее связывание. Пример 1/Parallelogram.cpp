#include <iostream>
#include "Parallelogram.h"
using namespace std;

Parallelogram::Parallelogram(double a, double h)
{
	m_value1 = a;
	this->h = h;
}
void Parallelogram::ShowArea()const
{
	cout << "S: " << m_value1 * h << endl;
}