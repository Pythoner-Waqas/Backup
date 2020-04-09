/*Let’s consider a problem. In a company, there are deductions from the salary of the employees for a fund. 
The deductions rules are as follows: 
If salary is less than 10,000 then no deduction 
If salary is more than 10,000 and less than 20,000 then deduct Rs. 1,000 as fund 
If salary is equal to or more than 20,000 then deduct 7 % of the salary for fund 
Take salary input from user and after appropriate deduction show the net payable amount. */ 

// <10000/10000 = 0.SOMETHING = 0
// 10000-<20000 / 10000 = 1.SOMETHING = 1
// 20000>/10000 = other than 0 and 1. = 2 or >2
 
#include <iostream>
using namespace std;
main()
{
	//declare
	int salary;
	float discount, payable;
	
	//prompt
	cout << "enter the salary: ";
	cin >> salary;
	
	//switch
	switch(salary/10000)
	{
		case 0:
			discount = 0;
			payable =salary - discount;
			cout << payable;
			break;
			
		case 1:
			discount = 1000;
			payable =salary - discount;
			cout << payable;
			break;
			
		default :
			discount = salary*(7.0/100); //(7.0/100)
			payable = salary-discount;
			cout << payable;	
		
	}
}

