/*This program takes input the bill, calculates discount based on conditions,
and then finally outputs final amount payable 
*/
#include <iostream>

using namespace std;

main()
{
	
float bill,discount,payable;

cout << "Enter amount of bill ";
cin >> bill;

if (bill <= 5000)
{
	discount = bill*0.10;
	payable = bill - discount;
}
else 
{
	discount = bill*0.15;
	payable = bill - discount;
}

cout << "Please pay "<< payable;

}

