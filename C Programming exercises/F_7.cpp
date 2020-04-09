//an inline function

#include <iostream>
using namespace std;

inline int maxim(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}

main()
{
	int max;
	max = maxim(5,4);
	cout << max;

}

