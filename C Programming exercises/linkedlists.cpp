#include <iostream>
using namespace std;

// The Node class
class Node
{
	private:
		int object;
		Node *nextNode;

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
		
};

//The List Class
class List
{
	public:
		List();
		void add(int obj);
		int get();
		bool next();
		friend void traverse(List list);
		friend List addNodes();
		
	private:
		int size;
		Node *headNode;
		Node *currentNode;
		Node *lastCurrentNode;
};

List::List()
{
	size = 0;
	headNode = new Node();
	headNode->setNext(NULL);
	currentNode = NULL;
	lastCurrentNode = NULL; 	
}


bool List::next()
{
	if(currentNode==NULL)
	{
		return false;
	}
	lastCurrentNode = currentNode;
	currentNode = currentNode->getNext();	
	if(currentNode==NULL||size==0)
	{
		return false;
	}
	else
	{
		return true;
	}	
} 

int List::get()
{
	if(currentNode!=NULL)
	{
		return currentNode->getObject();	
	}
} 

void List::add(int obj)
{
	Node *newNode = new Node();
	newNode->setObject(obj);
	if(currentNode != NULL)
	{
		newNode->setNext(currentNode->getNext());
		currentNode->setNext(newNode);
		lastCurrentNode = currentNode;
		currentNode = newNode;	
	}
	else
	{
		newNode->setNext(NULL);
		headNode->setNext(newNode);
		lastCurrentNode = headNode;
		currentNode = newNode;	
	}
	size++;	
}

List addNodes()
{
	List list;
	list.add(2);
	list.add(6);
	list.add(8);
	list.add(7);
	list.add(1);
	cout << "List size: " << list.size<<endl;
	return list;
}

void traverse(List list)
{
	Node *savedCurrentNode = list.currentNode;
	list.currentNode = list.headNode;
	for(int i=1;list.next();i++)
	{
		cout << "Element no: " << i << " " << list.get() << endl;
	}
	list.currentNode=savedCurrentNode;
}



main()
{
	List list; 
	list = addNodes();
	traverse(list);

}

