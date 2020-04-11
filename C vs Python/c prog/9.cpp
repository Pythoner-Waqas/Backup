//this program displays the sum of squares of integers from 1 to n
#include <iostream>

using namespace std;

main()
{
int n,square,result,i;
cout << "enter the integer you want to find sum upto ";
cin >> n;

result = 0;
for (i=1;i<=n;i+=1)
{
	square = i*i;
	result += square;
}

cout << "sum is " << result;
}

