// Calculate the average age of three students and prompt the user to enter the age.

#include <iostream>
using namespace std;
main()
{
	int age1,age2,age3;
	int totalage, averageage;
	
	cout << "Please enter the age of student 1  ";
	cin >> age1;
	
	cout << "Please enter the age of student 2  ";
	cin >> age2;
	
	cout << "Please enter the age of student 3  ";
	cin >> age3;
	
	totalage = age1+age2+age3;
	averageage = totalage/3;
	
	cout << "Average age of students is: " << averageage;


}

