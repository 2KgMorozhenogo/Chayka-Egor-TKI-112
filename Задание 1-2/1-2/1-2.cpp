#include <iostream>
#include <math.h>

using namespace std;
double GetDistance(const double x1, const double y1, const double x2, const double y2);

int main()
{
	double x1, y1;
	cout << "input x1 and y1" << "\n";
	cin >> x1 >> y1;

	double x2, y2;
	cout << "input x2 and y2" << "\n";
	cin >> x2 >> y2;
	
	double distance = GetDistance(x1, y1, x2, y2);

	cout << distance;
	return 0;
}	

double GetDistance(const double x1, const double y1, const double x2, const double y2)
{
	return sqrt(pow((x2-x1),2) + pow((y2-y1), 2));
}
