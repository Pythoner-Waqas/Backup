/* Following program demonstrates the new and delete operators. 
It deallocates the memory properly before terminating. */
 
#include <iostream>
using namespace std;

class Date{
	
	private:
		//data
		int day;
		int month;
		int year;
	
	public:
		
		// constructor and destructor
		Date(){
			cout << "default constructor"<<endl;
			this->day = 12;
			this->month=5;
			this->year = 1995;
		}
		Date(int d,int m){
			cout << "inbetween"<<endl;
			this->day = d;
			this->month = m;
			this->year=1995;
		}
		Date(int day,int mon,int year){
			cout << "customized"<<endl;
			this->day = day;
			this->month = mon;
			this->year = year;
		}
		~Date(){
			cout << "Destructor"<<endl;
		}
		
		//functions
		void setday(int d){
			this->day = d;
		}		
		void setmonth(int m){
			this->month = m;
		}		
		void setyear(int y){
			this->year = y;
		}
		void display(){
			cout << this->day << " / "<<this->month<<" / "<<year<<endl;
		}
};



main()
{
Date *waqasptr;
waqasptr = new Date[10];
(*waqasptr).display();
waqasptr->display();
delete []waqasptr; 
}

