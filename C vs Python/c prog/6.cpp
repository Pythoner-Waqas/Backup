/* This program calculates the factorial 
*/
#include <iostream>

using namespace std;

main()
{
int result,number;

cout << "Please enter number to calculate factorial ";
cin >> number;

result = 1;

while (number>1)
{
	result *= number;
	number -= 1;
}

cout << "Factorial is "<< result;
}

