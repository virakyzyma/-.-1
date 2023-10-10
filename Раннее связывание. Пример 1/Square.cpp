#include <iostream>

#include "Square.h"

using namespace std;

void Square::ShowArea() const
{
    cout << "Area of square: " << m_value1 * m_value2 << endl;
}