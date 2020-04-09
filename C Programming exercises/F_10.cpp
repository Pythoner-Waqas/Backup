/* A sample program with the Date class. 
Constructors are also used*/ 

#include <iostream>
using namespace std;

class Date{
	
	private:
		//data
		int day;
		int month;
		int year;
	
	public:
		// constructor
		Date();
		Date(int d,int m,int y);
		//functions
		void setday(int d);		
		void setmonth(int m);		
		void setyear(int y);
		void display();
};

Date::Date(){
	day = 12;
	month=5;
	year = 1995;
}
Date::Date(int d,int m,int y){
	day = d;
	month = m;
	year = y;
}
void Date::setday(int d){
	day = d;
}		
void Date::setmonth(int m){
	month = m;
}		
void Date::setyear(int y){
	year = y;
}
void Date::display(){
	cout << day << " / "<<month<<" / "<<year;
}

main()
{
Date waqas;
waqas.display();

}


