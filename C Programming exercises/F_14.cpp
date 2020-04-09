/* A sample program showing the use of friend function, 
which access the private data members of two classes.*/

#include <iostream>
using namespace std;

class class2;

class class1{
	private:
		int i;
	public:
		class1(int x);
		void display(){
			cout << "class 1 " << i <<endl ;
		}
		
	friend void friendfunc(class1 *a,class2 *b);	
};

class class2{
	private:
		int ii;
	public:
		class2(int xx);
		void display(){
			cout << "class 2 " << ii <<endl ;
		}
		
	friend void friendfunc(class1 *a,class2 *b);	
};


class1::class1(int x){
	i = x;
}
class2::class2(int xx){
	ii =xx;
}
void friendfunc(class1 *a,class2 *b){
	cout << "addition using friend "<<endl;
	cout << (*a).i + (*b).ii<<endl;
}


main()
{
	class1 myclass1(5);
	class2 myclass2(25);
	myclass1.display();
	myclass2.display();
	friendfunc(&myclass1,&myclass2);


}

