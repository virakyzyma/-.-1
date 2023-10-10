#pragma once
#include "Figure.h"
class trapezoid : public Figure
{
	double h;
public:
	trapezoid(double a, double b, double h);
	virtual void ShowArea()const;
};

