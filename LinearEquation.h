#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H

#include<iostream>
using namespace std;

class LinearEquation
{
private:
	double a, b, c, d, e, f;//six variables for linear equation

public:
	//constructor for the six variables
	LinearEquation(double theA, double theB, double theC, double theD, double theE, double theF)
	{
		a = theA;
		b = theB;
		c = theC;
		d = theD;
		e = theE;
		f = theF;
	}

	//constructor for intersection
	LinearEquation(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
	{
		//For first line
		a = y2 - y1;
		b = x1 - x2;
		e = (a * x1) + (b * y1);
		//for second line
		c = y4 - y3;
		d = x3 - x4;
		f = (c * x3) + (d * y3);
	}

	//six "getter" functions, one for each variable
	double getA() { return a; }
	double getB() { return b; }
	double getC() { return c; }
	double getD() { return d; }
	double getE() { return e; }
	double getF() { return f; }

	//tells whether or not the equation is solvable
	bool isSolvable()
	{
		if ((a * d) == (b * c))
		{
			return false;
		}

		else
		{
			return true;
		}

	};

	//"getter" function that returns x
	double getX()
	{
		double first = e * d;
		double second = b * f;
		double sub = first - second;
		double third = a * d;
		double fourth = b * c;
		double subTwo = third - fourth;
		double x = sub / subTwo;
		//double x = ((e * d) - (b * f)) / ((a * d) - (b * c));

		return x;
	}

	//"getter" function that returns y
	double getY()
	{
		double y = ((a * f) - (e * c)) / ((a * d) - (b * c));

		return y;
	}
};

#endif