#include <iostream>
using namespace std;

class personalPassword{
	//interface of the class
	public:
		//constructor of the class
		personalPassword();

		//other functions for calling
		void display();
		void setter();
		void getter();
		void passEncrypt();
		void passDcrypt();
	
	//hidden part of class
	private:
		char password[20];
		char *passptr;
};

personalPassword::personalPassword(){
	passptr = password;
	passptr = NULL;
	cout << "...........The default constructor called............." << endl << endl;
}

void personalPassword::display(){
	cout << "The default value of password is: NULL" << endl;
	cout << "The default value of password pointer is: NULL"  << endl <<endl; 
	
}

void personalPassword::setter(){
	cout << "Please enter the password less than 20 words: E.G. CS201  ";
	cin >> password ;
}

void personalPassword::getter(){
	cout << "The password via getters function is: " << password << endl;
}

void personalPassword::passEncrypt(){
	//now encrypting the password by using ^ with 3
	passptr = password;
	while(*passptr!='\0'){
		*passptr = (*passptr^3);
		passptr++;
	}
	cout << "The encrypted password using passEncrypt() is: " << password << endl; 
}

void personalPassword::passDcrypt(){
	//now decrypting 
	passptr = password;
	while(*passptr!='\0'){
		*passptr = (*passptr^3);
		passptr++;
	}
	cout << "The decrypted password using passDcrypt() is: " << password;
}

main()
{
	personalPassword obj;
	obj.display();
	obj.setter();
	obj.getter();
	obj.passEncrypt();
	obj.passDcrypt();
}

