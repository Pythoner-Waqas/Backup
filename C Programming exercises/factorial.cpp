//Calculate the factorial of a given number

#include <iostream>
using namespace std;
main()
{
	//declare
	int number,factorial;
	
	//prompting
	cout<< "please enter the number for finding factorial ";
	cin >> number;
	
	//initialize
	factorial = 1;
	
	//while
	while(number>1)
	{
		factorial = factorial * number;
		number = number - 1;
	}
	
	cout << "the factorial is: "<<factorial;
	
}

