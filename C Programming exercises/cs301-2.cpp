#include <iostream>
using namespace std;
#include <string.h>
#include <cmath>

// The Node class
class Node
{
	private:
		int object;
		Node *nextNode;
		Node *prevNode;
		
	public:
		void setObject(int obj)
		{
			this->object = obj;
		}

		int getObject()
		{
			return object;
		}		
		
		void setNext(Node *nextNode)
		{
			this->nextNode = nextNode;
		}
		
		Node *getNext()
		{
			return nextNode;
		}
		
		void setPrev(Node *prevNode)
		{
			this->prevNode = prevNode;
		}
		
		Node *getPrev()
		{
			return prevNode;
		}
		
};

//The Stack Class
class Stack
{
	public:
		Stack();
		void push(int obj);
		int top();
		int pop();
		int getSize();
		bool isEmpty();
		
	private:
		int size;
		Node *headNode;
		Node *currentNode;
		Node *lastCurrentNode;
};

Stack::Stack()
{
	size = 0;
	headNode = new Node();
	headNode->setNext(NULL);
	headNode->setPrev(NULL);
	currentNode = NULL;
	lastCurrentNode = NULL; 	
}

int Stack::getSize()
{
	return this->size;
}

bool Stack::isEmpty()
{
	if (this->size==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Stack::push(int obj)
{	
	Node *newNode = new Node();
	newNode->setObject(obj);
	
	if(currentNode != NULL)
	{
		newNode->setNext(NULL);
		newNode->setPrev(currentNode);
		
		lastCurrentNode = currentNode;
		lastCurrentNode->setNext(currentNode);
		lastCurrentNode->setPrev(lastCurrentNode->getPrev());
		
		currentNode = newNode;
	}
	else
	{	
		newNode->setNext(NULL);
		newNode->setPrev(headNode);
		headNode->setNext(newNode);
		lastCurrentNode = headNode;
		currentNode = newNode;
			
	}
	this->size++;	
}

int Stack::top()
{
	if(currentNode!=NULL)
	{
		return currentNode->getObject();	
	}
} 

int Stack::pop()
{
	int x =  currentNode->getObject();	
	Node* p = new Node();
	p = currentNode;
	currentNode = lastCurrentNode;
	currentNode->setNext(NULL);
	currentNode->setPrev(lastCurrentNode->getPrev());
	
	lastCurrentNode = lastCurrentNode->getPrev();	
	if(lastCurrentNode!=NULL)
	{
		lastCurrentNode->setNext(currentNode);
		lastCurrentNode->setPrev(lastCurrentNode->getPrev());
	}
	
	delete p;
	this->size--;
	return x;
	
}

int evaluatePostfix(string exp)
{
	int i;
	Stack s;
	int val1;
	int val2;
	
	for(i=0;i<(exp.length());i++)
	{
		if(isdigit(exp[i]))
		{
			s.push(exp[i]-'0');
		}
		
		else
		{	
			val1 = s.pop();
			val2 = s.pop();
			
			switch(exp[i])
			{
				case '+': s.push(val2+val1);
					break;
				case '-': s.push(val2-val1);
					break;
				case '*': s.push(val2*val1);
					break;
				case '/': s.push(val2/val1);
					break;
				case '^': s.push(pow(val2,val1));
					break;
			}
		}
	}
	return s.pop();
}

int main()
{
	cout <<endl;
	
	string exp = "43+5*";
	int val = evaluatePostfix(exp);	
	cout << "evaluating expression: "<< exp<<endl;
	cout << "The length of expression is: "<< exp.length()<<endl;
	cout << "The value of postfix expression is: "<< val <<endl<<endl;

	string exp1 = "435*+";
	int val1 = evaluatePostfix(exp1);	
	cout << "evaluating expression: "<< exp1<<endl;
	cout << "The length of expression is: "<< exp1.length()<<endl;
	cout << "The value of postfix expression is: "<< val1<<endl<<endl;
	
	string exp2 = "623+-382/+*2^3+";
	int val2 = evaluatePostfix(exp2);	
	cout << "evaluating expression: "<< exp2<<endl;
	cout << "The length of expression is: "<< exp2.length()<<endl;
	cout << "The value of postfix expression is: "<< val2<<endl<<endl;
}



