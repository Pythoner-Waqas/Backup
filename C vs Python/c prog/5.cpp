/*This calculates sum of even numbers for a given upper limit of integers
*/
#include <iostream>

using namespace std;

main()
{
int number,n,result;	

cout << "Please enter the upper limit for sum ";
cin >> number;

n = 0;
result = 0;

while (n<=number)
{
	result+=n;
	n +=2;
}

cout << "sum of upto "<< number << " is "<<result;
}

