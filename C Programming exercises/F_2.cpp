/* A simple program using the area of circle formula as macro */ 

#include <iostream>
using namespace std;

#define PI 3.14
#define CircleArea(x) (PI*x*x)
main()
{
	float radius;
	cout << "Enter radius: ";
	cin >> radius;
	cout << "Area is: " << CircleArea(radius);
}

