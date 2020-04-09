#include <iostream>
using namespace std;
#include <string.h>

main()
{
struct book{
      int book_Id;
      string book_Title;
      string book_Author;
      int book_Cost;
       };
       book libraryp[5];
       int arrayposition=0;
   void addbooks(){
       	book bookdetail;
       	cout<<"Enter the book id: "<<endl;
		cin>>bookdetail.book_Id;
       	cout<<"Enter the book Title:"<<endl;
       	cin>>bookdetail.book_Title;
       	cout<<"Enter the book author:"<<endl;
       	cin>>bookdetail.book_Author;
       	cout<<"Enter the book price:"<<endl;
		cin>>bookdetail.book_Cost;
		libraryp[arrayposition]=bookdetail;
		arrayposition++;
		
	   }
	   void displaybooks(){
       	for(int i=0; i<5; i++){
       		book displayitem=libraryp[i];
       		if(displayitem.book_Id!=0){
			  
       		cout<<"book id is     :"<<displayitem.book_Id<<endl;
       		cout<<"book Title is  :"<<displayitem.book_Title<<endl;
       		cout<<"book author is :"<<displayitem.book_Author<<endl;
       		cout<<"book cost is   :"<<displayitem.book_Cost<<endl;
       		 }
		   }
	   }
	   void book_author(){
	   	string searchauthor;
 		cin >> searchauthor;
	   	for(int i=0; i<5; i++){
       		book displayitem=libraryp[i];
       		
       		string s =searchauthor;  
    		int n = s.length();  
    		char author[n + 1]; 
    		strcpy(author, s.c_str()); 
       		
       		
       		string st =displayitem.book_Author;  
    		int ln = st.length();  
    		char bookauthor[ln + 1]; 
    		strcpy(bookauthor, st.c_str()); 
       		
       		if(strcmp(author,bookauthor)==0){ 
       		cout<<"book id is    : "<<displayitem.book_Id<<endl;
       		cout<<"book Title is : "<<displayitem.book_Title<<endl;
       		cout<<"book author is: "<<displayitem.book_Author<<endl;
       		cout<<"book cost is  : "<<displayitem.book_Cost<<endl;
       		 }
		   }
       	
	   }
	   void count_book(){
	   	int count=0;
	   	for(int i=0; i<5; i++){
       		book displayitem=libraryp[i];
       		if(displayitem.book_Id!=0){
       			count++;
				   }
			}
       	cout<< "Total No of books in library:   "<<count<<endl;
	   }

 int main()
{
 while(true){
 	cout<<"    ********Library Record System*******"<<endl;
 	cout<<"press 1 to enter book record."<<endl;
 	cout<<"press 2 to Display all record available in library."<<endl;
 	cout<<"press 3 to Search Books by Author Name."<<endl;
 	cout<<"press 4 Count Total Books in Library."<<endl;
 	cout<<"press 5 Exit from the System."<<endl;
 	 cout<<"Enter Choise:  "<<endl;
 	int choise;
 	cin>>choise;
 	switch(choise){
 	case 1:
 	addbooks();	
 	break;
 	case 2:
 	displaybooks();	
 	break;
 	case 3:	
 	book_author();
 	break;
 	case 4:
 	count_book();
 	break;
 	case 5:
 		exit(0);
 	}
 }

cin.get();
}




}

