//continue vs break

#include <iostream>
using namespace std;
main()
{
	for (int i=0;i<=10;i++)
	{
		if(i>5&&i<9)
		{
			break;
		}
		cout<<i<<endl;
	}

	cout << "Hi i am out of for loop!";
}

