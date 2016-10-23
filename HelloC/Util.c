#include<math.h>
#include "Util.h"

float getTwoNumArea(float num1,float num2) {
	return num1*num2;
}

float getTwoNumAdd(float num1, float num2) {
	return num1 + num2;
}

float getTwoNumDiff(float num1, float num2) {
	return num1 - num2;
}

double getTriangleArea(double a, double b, double c) {
	double area = 0.0;
	if (a+b>c||a+c>b||b+c>a) {
		double s = (a + b + c) / 2;
		area = sqrt(s*(s - a)*(s - b)*(s - c));
		return area;
	}
	else 
	{
		return area;
	}
}

double getPerimeter(double a, double b, double c) {
	return a + b + c;
}