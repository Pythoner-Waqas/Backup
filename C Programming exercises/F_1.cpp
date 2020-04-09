// Program that shows the use of Define for debugging 
// Comment the #define DEBUG and see the change in the output 

#include <iostream>
using namespace std;

#define DEBUG 

main()
{
	int i;
	int arr[10];

	for(i=0;i<10;i++){
		arr[i] = i;
	}

	#ifdef DEBUG
		for(i=0;i<10;i++){
			cout << arr[i]<<endl;
		}
	#endif

}

