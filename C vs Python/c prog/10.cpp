/*
this code gets a grade from user and displays a description accordingly
*/

#include <iostream>

using namespace std;

main()
{
char grade;

cout << "input grade from A to F ";
cin >> grade;

switch (grade)
{
	case 'a' : case 'A': cout << "Excellent";
	break;
	case 'b' : case 'B': cout << "Very Good";
	break;
	case 'c' : case 'C': cout << "Good";
	break;
	case 'd' : case 'D': cout << "Poor";
	break;
	case 'f' : case 'F': cout << "Fail";
	break;
	default : cout << "Sorry, you did not enter from A to D or F";
}

}

