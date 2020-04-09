/* The following example replaces strcpy and strncpy with the single function name stringCopy. */ 

#include <iostream>
#include <string.h> 
using namespace std;

inline void stringcpy(char *dest,const char *src){
	strcpy(dest,src);
}

inline void stringcpy(char *dest,const char *src,int len){
	strncpy(dest,src,len);
}

main()
{
	char stra[] = "My name is Waqas" ;
	char strb[50];
	char strc[50];
	stringcpy(strb,stra);
	cout << strb<<endl;
	stringcpy(strc,stra,4);
	cout << strc;

}

