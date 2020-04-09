//Calculate sum of first 1000 integers starting from 1

#include <iostream>
using namespace std;
main()
{
	//declare
	int sum,number;
	
	//initialize
	sum = 0;
	number = 1;
	
	//use while loop
	while(number<=10000000000)
	{
		//adding the integer to the contents of sum
		sum = sum + number;
		
		//generate the next integer by adding 1 to the integer
		number = number+1;
		
	}
	
	cout << "The sum of the first 1000 integers from 1 is: "<<sum;
	
}

