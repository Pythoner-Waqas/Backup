// A program with default arguments in a function prototype 

#include <iostream>
using namespace std;

void show(int first=1,float second=2.5,char third='d');

main()
{
	show();
	show(100);
	show(22,123.5);
	show(123,42.2,'t');

}

void show(int first,float second,char third){
	cout << "first: " << first <<endl<< "second: "<<second<<endl<<"third: "<<third<<endl;
}
