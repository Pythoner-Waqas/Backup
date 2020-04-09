/* The following program demonstrate the declaration and uses of friend functions of a class We set values in the constructors of the classes. 
The program prompts the user to enter a choice of addition, subtraction, multiplication or division. And then performs the appropriate 
operation by using the friend functions.   */ 

#include <iostream>
using namespace std;

class myClass2; // declaration of the myClass2 for the friend functions 
 
class myClass1 {       
	private:  
		float value ; 

    public:   
		myClass1 ( )
		{               
			value = 200; 
		} 
 
 	// friend functions            
 	friend float addBoth ( myClass1, myClass2 ) ;            
	friend float subBoth ( myClass1, myClass2 ) ;            
	friend float mulBoth ( myClass1, myClass2 ) ;            
	friend float divBoth  ( myClass1, myClass2 ) ; 
}; 
 
class myClass2 {       
	private:  
		float value ; 
 
    public:  
	    myClass2( )
		{                
			value = 100 ;            
		}
			 
 
 // friend functions            
 	friend float addBoth ( myClass1 , myClass2 ) ;
	friend float subBoth ( myClass1 , myClass2 ) ;            
	friend float mulBoth ( myClass1 , myClass2 ) ;            
	friend float divBoth ( myClass1 , myClass2 ) ; 
}; 

float addBoth ( myClass1 object1 , myClass2 object2 ) 
{       
	return ( object1.value + object2.value ) ; 
} 
 
float subBoth ( myClass1 object1 , myClass2 object2 ) 
{       
	return ( object1.value - object2.value ) ; 
} 
 
float mulBoth ( myClass1 object1 , myClass2 object2 ) 
{       
	return ( object1.value * object2.value ) ; 
} 
 
float divBoth ( myClass1 object1 , myClass2 object2 ) 
{       
	return ( object1.value / object2.value ) ; 
} 
 
main() 
{       

	myClass1 myClass1Obj ;  //create an object of class myClass1       
	myClass2 myClass2Obj ;  //create an object of class myClass2       
	char choice;       
	cout << "Please enter one of the operator +, -, /, *   " << "followed by Enter " <<endl;
	cin >> choice; 
 
    if ( choice == '+' )       
	{           
		cout << "The sum is : " << addBoth(myClass1Obj , myClass2Obj) << endl;       
	}       
	else if ( choice == '-' )       
	{           
		cout << "The difference is : " << subBoth(myClass1Obj , myClass2Obj) << endl;       
	}       
	else if ( choice == '*' )       
	{           
		cout << "The multiplication is : " << mulBoth(myClass1Obj , myClass2Obj) << endl;       
	}       
	else if ( choice == '/' )       
	{          	
		cout << "The division is : " << divBoth(myClass1Obj , myClass2Obj) << endl;       
	}       
	else       
	{           
		cout << "Enter a valid choice next time. The program is terminating" << endl;       
	} 
 
} 
 


