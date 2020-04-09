//This program allows the user to guess a character from a to z 
//do-while construct is used to allow five tries for guessing 

#include <iostream>
using namespace std;
main()
{
	//declare
	char c;
	int trynum = 0;
	
	//initialization
	//trynum = 0;
	
	//do while construct
	do
	{
		//guess
		cout << "please guess a character from a to z: ";
		cin >> c;
		
		//check
		if (c == 's')
		{
			cout<< "Congratz! your guess is correct";
		}
		else
		{
			trynum = trynum + 1;
		}
	}
	while (trynum<=5 && c!='s');

}

