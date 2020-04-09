/* This program calculates the discount amount for a customer. 
As different discount percentage applies on different amount so program is using if statement for deciding 
which discount is applicable and display the result. */ 

#include <iostream>
using namespace std;
main()
{
	//declare
	double amount,discount,netpayable;
	
	//prompting
	cout<<"enter the amount ";
	cin >> amount;
	
	//condition
	if(amount>=5000)
	{
		discount = amount * (15/100.0);
		netpayable = amount-discount;
		//display
		cout << "discount is: "<<discount<<endl;
		cout << "netpayable is: "<<netpayable;
	}
	else
	{
		discount = amount * (10.0/100);
		netpayable = amount-discount;
		//display
		cout << "discount is: "<<discount<<endl;
		cout << "netpayable is: "<<netpayable;
	}
}

