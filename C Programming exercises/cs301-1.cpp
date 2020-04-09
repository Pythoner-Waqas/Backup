#include <iostream>
#include <string.h>
using namespace std;

struct StudentProfile
{
	string userid;
	string userName;
	string subject;
	string degreeProgram;
	string uniName;
};

class ArrayList
{
	private:
		int current;
		int listSize;
		StudentProfile Array[11];
		int count;
		
	public:	
		
		ArrayList(int listSize)
		{
			this->listSize=listSize;
			this->count=0;
		}
		
		void add(StudentProfile student,int index)
		{
			this->Array[index] = student;
			this->count++;
		}
		
		find(string stid)
		{
			for (int i=1;i<=this->count;i++)
			{
				if(this->Array[i].userid==stid)
				{
					cout << "Record with id "<< stid << " is fount at location "<< i << endl;
					cout<<i<<'\t'<<Array[i].userid<<'\t'<<Array[i].userName<<'\t'<<Array[i].subject<<'\t'<<Array[i].degreeProgram<<'\t'<<Array[i].uniName<<endl;
					break;
				}
			}
		}
		
		void update(int stdNo, int index)
		{
			this->Array[stdNo] = this->Array[index];
		}
		
		void remove(int index)
		{
			for(int i=1; i<this->listSize; i++)
			{
				if (i==index)
				{
					for(int j=i;j<listSize-1;j++)
					{
						this->Array[j] = this->Array[j+1];
					}
					this->count--;
					break;
				}
			}
		}
		
		void listLength()
		{
			cout<<this->count;	
		}
		
		void showList()
		{
			cout << "S.No	" << "ID		" << "Name	"<< "Sub	"<<"Dep	"<<"Uni	" << endl;
			StudentProfile std;
			for(int i=0;i<this->listSize;i++)
			{
				if (i+1 <= count)
				{
					std = this->Array[i+1];
					cout<<i+1<<'\t'<<std.userid<<'\t'<<std.userName<<'\t'<<std.subject<<'\t'<<std.degreeProgram<<'\t'<<std.uniName<<endl;	
				}	
				else
				{
					break;
				}
			}
		}
		
		cmpStdRec(StudentProfile std1, StudentProfile std2)
		{
			if (std1.userid==std2.userid)
			{
				cout << "Students are same.";
			}
			else
			{
				cout << "Students are not same.";
			}
		}
};	

main()
{
	
	ArrayList List(11); //Array of size 11
	
	StudentProfile std1,std2,std3,std4,std5; //List containing 5 students profile
		
	std1.userid = "BC123456789";
	std1.userName = "Bilal";
	std1.subject = "cs301";
	std1.degreeProgram = "BSCS";
	std1.uniName = "VU"; 

	std2.userid = "BC123456779";
	std2.userName = "Naved";
	std2.subject = "cs301";
	std2.degreeProgram = "BSCS";
	std2.uniName = "VU"; 
	
	std3.userid = "BC123456769";
	std3.userName = "Ahmed";
	std3.subject = "cs301";
	std3.degreeProgram = "BSCS";
	std3.uniName = "VU"; 
	
	std4.userid = "BC123456759";
	std4.userName = "Zahid";
	std4.subject = "cs301";
	std4.degreeProgram = "BSCS";
	std4.uniName = "VU"; 
	
	std5.userid = "BC123456749";
	std5.userName = "Asghar";
	std5.subject = "cs301";
	std5.degreeProgram = "BSCS";
	std5.uniName = "VU"; 
	
	List.add(std1,1); 
	List.add(std2,2); 
	List.add(std3,3); 
	List.add(std4,4); 
	List.add(std5,5); 
	
	cout << "Showing Complete List"<<endl;
	List.showList();
	cout<< endl;
	
	cout << "Showing element with id BC123456759"<<endl;
	List.find("BC123456759");
	cout<<endl;
	
	cout << "Updating 4th element of List with 1st element"<<endl;
	List.update(4,1);
	List.showList();
	cout << endl;
	
	cout << "Removing 4th student profile from List" << endl;
	List.remove(4);
	List.showList();
	cout << endl;
	
	cout << "Showing List Length" << endl;
	List.listLength();
}

