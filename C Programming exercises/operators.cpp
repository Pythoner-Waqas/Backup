/* A program that takes a four digits integer from user and shows the digits on the screen separately i.e. 
if user enters 7531, it displays 7,5,3,1 separately. */ 

#include <iostream>
using namespace std;
main()
{
	int number;
	int f,s,t,fo;
	
	//prompt the user for input
	cout << "Please input 4 digit number ";
	cin >> number;
	
	// to get the fourth digit
	fo = number % 10 ;
	
	// to update the number by removing the last digit
	number = number / 10; // 3 digit
	
	// to get the third number
	t = number % 10;
	
	// to update the number by ramoving the last digit
	number = number / 10; // 2 digit
	
	// to get the 2nd number
	s = number % 10;
	
	// to update the number by removing the last digit
	number = number / 10; // 1digit
	
	f = number ;
	
	cout << "The digits are: " << f << "," << s << "," << t << "," << fo ;



}

