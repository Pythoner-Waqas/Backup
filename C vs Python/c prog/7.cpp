/*This allows the user to guess a character from a to z
do-while construct is used to allow five tries for guessing
*/
#include <iostream>

using namespace std;

main()
{
char letter;
char correct;
int n;
	
cout<< "guess from a-z ";
cin >> letter;

correct = 'n';

n = 1;

do
{
	if (correct == letter)
	{
		cout<<"guessed correct";
	}
	else 
	{
		cout<<"please guess and remember that this is your "<< n << " (th) chance to try ";
		cin >> letter;
	}
	n+=1;

 } 
while (n <= 5 && correct!=letter);

}

