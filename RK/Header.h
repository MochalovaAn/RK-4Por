#pragma once
#include "math.h"
double f(double y)
{
	return y;
};

double g(double a, double l, double m, double t, double x)
{
	return -pow(l, 2)*x + a - m*cos(t);
};