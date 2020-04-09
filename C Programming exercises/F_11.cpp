/* A sample program with the Date class. Use of constructors and destructor is shown here. 
A message is displayed to show which one constructor is called */ 
 
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
		Date(int d,int m);
		Date(int day,int mon,int year);
		// destructor
		~Date();
		//functions
		void setday(int d);		
		void setmonth(int m);		
		void setyear(int y);
		void display();
};

Date::Date(){
	cout << "default constructor"<<endl;
	day = 12;
	month=5;
	year = 1995;
}
Date::Date(int d,int m){
	cout << "inbetween"<<endl;
	day = d;
	month = m;
	year=1995;
}
Date::Date(int day,int mon,int year){
	cout << "customized"<<endl;
	day = day;
	month = mon;
	year = year;
}
Date::~Date(){
	cout << "Destructor"<<endl;
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
	cout << day << " / "<<month<<" / "<<year<<endl;
}

main()
{
Date waqas;
waqas.display();

}

