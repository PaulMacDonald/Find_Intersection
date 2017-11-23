#include<iostream>
#include"LinearEquation.h"
using namespace std;

int main()
{
	cout << "Enter eight numbers for the endpoints: ";
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, x4 = 0, y4 = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	LinearEquation twoLines(x1, y1, x2, y2, x3, y3, x4, y4);

	cout << endl;

	if (twoLines.isSolvable())
	{
		cout << "The intersection is " << twoLines.getX() << "," << twoLines.getY() << endl;
	}

	else
	{
		cout << "These lines do not intersect." << endl;
	}

	return 0;
}