// This program shows the dynamic allocation of memory according to the requirement to 
//store a certain number of a structure.

#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	struct Employee{
		char name[40];
		int age;
	};	
	int num;
	Employee *workerptr; 
	
	cout << "Total number of employees? ";
	cin >> num;
	
	workerptr = (Employee *)malloc(num*sizeof(Employee));
	if(workerptr=NULL){
		cout << "......error......";
		return 1;
	}
	cout << "memory has been allocated.";
	free(workerptr);





}

