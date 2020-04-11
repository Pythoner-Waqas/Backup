// this program displays the table of 2 up to multiplier 10

#include <iostream>

using namespace std;

main()
{
int result, i;
result = 2;

for (i=1;i<=10;i=i+1)
{
	result = 2*i;
	cout << "2 x " << i << " = " << result<<endl;
}

}


