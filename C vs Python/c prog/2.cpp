//This does the age comparison of two person by first taking age as inputs from user
#include <iostream>
using namespace std;

main()
{

float waqas,waqar;	
	
cout << "Please enter the age of Waqas ";
cin >> waqas;
cout << "Please enter the age of Waqar ";
cin >> waqar;

if (waqas > waqar)
{
	cout << "Waqas is older than Waqar";
}
else if (waqas < waqar)
{
	cout << "Waqas is younger than Waqar";
}
else
{
	cout << "Waqas is same as Waqar";
}

}

