//Calculate sum of even numbers for a given upperlimit of integers starting from 1.

#include <iostream>
using namespace std;
main()
{
	//declare
	int number, upperlimit;
	long sum;
	
	//initialization
	sum = 0;
	number = 1;
	
	//prompting
	cout << "enter the upperlimit ";
	cin >> upperlimit;
	
	//while loop
	while (number <= upperlimit)
	{
		//adding the even integer to the content
		if (2*(number/2)==number)
		{
			sum = sum + number;
		}
		
		//generating new number
		number = number+1;
		
	}
	
	cout << "the sum of even numbers of first " << upperlimit << " integers starting from 1 is: "<<sum;

}

