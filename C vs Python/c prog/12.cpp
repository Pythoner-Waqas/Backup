//This program calculates the square of a given number
#include <iostream>
// it is so that we could directly use cout
using namespace std;



// Function to calculate the square of a number
int square(int number)
{
	return (number*number);
}
	
main()
{	
	int number,result;
	
	cout<<"Please enter the number to calculate the square ";
	cin>>number;
	
	//Calling the function square(int number)
	result = square(number);
	
	cout<<"The square of " << number << " is " << result;

}

