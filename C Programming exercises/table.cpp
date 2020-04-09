//This program takes an integer input from user and displays its table 
//The table is displayed up to the multiplier entered by the user 

#include <iostream>
using namespace std;
main()
{
	//declare
	int i,num,max;
	
	//prompt
	cout << "enter the number for which you want a table: ";
	cin >> num;
	
	cout << "enter the multiplier up to which you want a table: ";
	cin >> max;
	
	//loop
	for(i=1;i<=max;i++)
	{
		cout << num << " x " << i << " = " << num * i << "\n";
	}
}

