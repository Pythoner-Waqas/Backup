/*This program calculates the sum of first 1000 integers 
*/

#include <iostream>

using namespace std;

main()
{
int result,number ; 

number = 0;
result = number;
while (number <= 1000)
{
	result += number;
	number += 1;
}

cout << "sum of first 1000 integers is " << result;
}

