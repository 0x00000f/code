//------
//Node.h
//------

#include <cstddef>



class Node { 
	public:	
		Node(); 
		Node(int data); 
		Node(int data, Node *nextNode); 
		~Node();
	
	
	private: 
		int data;
		Node * next;
};
