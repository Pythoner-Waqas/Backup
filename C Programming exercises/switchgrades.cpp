//this program gets a grade from user and displays a description accordingly

#include <iostream>
using namespace std;
main()
{
	//declare
	char grade;
	
	//prompt 
	cout << "enter the grade: ";
	cin >> grade;
	
	//switch structure
	switch(grade)
	{
		case'A':case'a': 
			cout << "Excellent";
			break;
			
		case'B':case'b':
			cout << "very good";
			break;
			
		case'C':case'c':
			cout << "good";
			break;
			
		case'D':case'd':
			cout << "poor";
			break;
			
		case'F':case'f':
			cout << "fail";
			break;
			
		default :
			cout << "Please enter grade from A to D or F";
	}

	

}

