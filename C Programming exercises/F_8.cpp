/* Overload functions to print variables of different types */ 

#include <iostream>
using namespace std;

void print(int i){
	cout << "int "<<i;
}
void print(double i){
	cout << "double "<<i;
}
void print(char *i){
	cout << "char "<<i;
}

main()
{
	int integ = 5;
	double doub = 123456789;
	char *cptr = "My name is waqas";
	
	print(integ);
	cout << endl;
	print(doub);
	cout <<endl;
	print(cptr);

}

