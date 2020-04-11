/*if user enter 7531, 
it displays 7,5,3,1 separately. */

#include <iostream>
using namespace std;

main()
{
int number,fourth_int,third_int,second_int,first_int;

cout << "Please enter 4 digit integer ";
cin >> number;

fourth_int = number%10;
number = number/10;
third_int = number%10;
number = number/10;
second_int = number%10;
number = number/10;
first_int = number;

cout << first_int << "," << second_int << "," << third_int << "," << fourth_int ;
}

