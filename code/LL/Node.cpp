//--------
//Node.cpp
//--------



#include "Node.h"

Node::Node(){ 
	next = NULL;
} 


Node::Node(int element){ 
	data = element;
	next = NULL;
} 

Node::Node(int element, Node *nextNode){ 
	data = element; 
	next = nextNode;
} 

Node::~Node(){ 

} 

