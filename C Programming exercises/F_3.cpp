//This program calculates the average age of a class of students  
//using dynamic memory allocation  

#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	int totalage;
	float averageage;
	int students;
	int *iptr;
	int *sptr;
	
	cout << "How many students are there in class? ";
	cin >> students;
	
	iptr = (int *) malloc(students*sizeof(int));
	if(iptr==NULL){
		cout << ".............ERROR ERROR ERROR...........";
		return 1;
	}
	sptr = iptr;
	totalage = 0;
	for (int i=0;i<students;i++){
		cout << "enter the age: ";
		cin >> *sptr;
		totalage += *sptr; 
		sptr++;
	}
	averageage = totalage/students;
	cout << "totalage is: " << totalage << endl;
	cout << "average age is: " << averageage;
	free(iptr);
	sptr = NULL;
	
}

