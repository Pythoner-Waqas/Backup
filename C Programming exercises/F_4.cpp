//This program allocates memory dynamically and then frees it after use. 
 
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
main()
{
	char s1[] = "My name is waqas";
	char *strptr;
	char *secondptr;
	
	strptr = (char *) malloc((strlen(s1)+1)*sizeof(char));
	if (strptr==NULL){
		cout << "......error......";
		return 1;
	}
	secondptr = strptr;
	strcpy(secondptr,s1);
	cout << "s1: " << s1 << endl << "secondptr: " << secondptr<< endl;
	
	free(strptr);
	secondptr = NULL;
}

