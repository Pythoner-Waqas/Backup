/* Following program takes the radius of a circle from the user and 
calculates the diameter, circumference and area of the circle and displays the result. */ 

#include <iostream>
using namespace std;
main()
{
	//declare variables
	float radius,circumference,diameter,area;
	
	//prompt the user to enter radius
	cout << "please enter the radius ";
	cin >> radius;
	
	//calculate the results
	circumference = 2*3.14*radius;
	diameter = 2*radius;
	area = 3.14*radius*radius;
	
	//display the results
	cout << "The circumference of circle is: ";
	cout << circumference;
	cout << endl;
	cout << "The diameter of circle is: " ;
	cout << diameter;
	cout << endl;
	cout << "The area of circle is: " ;
	cout << area;
	
}

