/*A sample program showing the use of friend function, 
which access the private data member of the class. */ 
#include <iostream>
using namespace std;

class classfriend
{
	friend void friendfunc(classfriend *a,int x);
	
	private:
		int i;
	public:
		
		classfriend(int x);
		void display(){
			cout << i;
		}		
};

classfriend::classfriend(int x){
	i = x;
}

void friendfunc(classfriend *a,int x)
{
	(*a).i += x;
}

main()
{
	classfriend myclass(5);
	myclass.display();
	cout<<endl;
	friendfunc(&myclass,5);
	myclass.display();	
}

