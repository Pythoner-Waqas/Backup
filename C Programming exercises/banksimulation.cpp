#include <iostream>
#include <fstream>
using namespace std;

class BankSimulation
{
		
};

class customer
{
	private:
		int customerNo;
		int arrTime;
		int duration;
		int status;
		int depart;
		
	public:
		
		customer(int customerNo,int arrTime,int duration)
		{
			this->customerNo = customerNo;
			this->arrTime = arrTime;
			this->duration = duration;
		}
		
		~customer()
		{
			cout << "destructor called";
		}
		
		setStatus(int i)
		{
			this->status = i;
		}
		
		setDepart(int arrTime,int duration)
		{
			this->depart = arrTime+duration;
		}
		
};

class Event
{
	private:
		customer *c;
		int arrTime;
	
	public:
		
	Event(customer *c,int arrTime)
	{
		this->c = c;
		this->arrTime = arrTime;
	}
};

main()
{
	int hour,min,duration,customerNo;
	ifstream infile;
	infile.open("bankdata.txt");
	if(infile>>hour>>min>>duration)
	{
		customerNo++;
		customer *c = new customer(customerNo,(hour*60)+min,duration);
		c->setStatus(-1); //new customer
		c->setDepart((hour*60)+min,duration);

	}
	

}

