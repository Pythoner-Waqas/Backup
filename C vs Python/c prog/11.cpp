/*this program gets salary input from user and calculates and displays the net payable 
amount after deduction according the conditions using switch case instead of if-else
*/
#include <iostream>

using namespace std;

main()
{
int salary,logic;

cout << "enter salary ";
cin >> salary;

logic = salary / 10000;

switch(logic)
{
	case(0): cout << "net payable is " << salary;
	break; //salary less than 10000
	case(1): cout << "net payable is " <<salary-1000;
	break; // salary more than 10000 but less than 20000
	default : cout << "net payable is " <<salary-(salary*0.07);
	break; //salary equal to or more than 20000
}

}

