/* This program checks the age of shakira and selena and displays the appropriate  the message. 
The program is using two if statements.*/ 

#include <iostream>
using namespace std;
main()
{
	//declaration
	int shakira, selena;
	
	//prompt the user 
	cout << "please enter age for shakira ";
	cin >> shakira;
	
	cout << "Please enter age for selena ";
	cin >> selena;
	
	//perform the test
	if (shakira>selena)
	{
		cout << "Shakira is older than selena";
	}
	
	else if (shakira = selena)
	{
		cout << "Shakira and selena are twins";
	}

	else
	{
		cout << "shakira is younger than selena";
	}
	
}

