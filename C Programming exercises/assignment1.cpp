#include <iostream>
#include <stdlib.h>
#include<time.h> 
using namespace std;

void getRandNum(int array[], int size);
void swapValue(int *a, int *b);
void findMinNum(int array[], int size);

main()
{
	srand(time(0));
	int arr[5] = {0};
	
	cout << "Random Numbers are	: 	";
	getRandNum(arr,5);
	cout << endl;
	findMinNum(arr,5);
	
}

void getRandNum(int array[], int size){
	
	for (int i=0;i<size;i++){
		array[i] = 1 + rand() % 100; 
		cout << array[i] << "\t";
	}
}

void swapValue(int *a, int *b){
	
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

void findMinNum(int array[], int size){
	
	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++){
			if (array[i]<array[j]){
				swapValue(&array[i],&array[j]);
			}
			
		}
	}
	
	for (int i=0;i<size;i++){
		cout << array[i]<< "\t";
			
	}
	
}




