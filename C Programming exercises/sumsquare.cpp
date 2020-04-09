//calculate the sum of squares of integers from 1 to n

#include <iostream>
using namespace std;
main()
{
	//declare 
	int i,n,sum;
	
	//initialize
	sum = 0;
	
	//prompt
	cout << "enter positive number for sum of squares: ";
	cin >> n;
	
	//loop
	for(i = 1;i<=n;i++)
	{
		sum += i*i; //sum = sum + (i*i)
	}

	cout << "the sum of the first " << n << " squares is "<< sum<<endl;

}

