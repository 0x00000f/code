#include <iostream> 
#include <stdlib.h>
#include "btree.h"
#include <stdio.h>

using namespace std;

int main (){ 
	btree testtree;
	testtree.insert(1);
	testtree.insert(5); 
	
	testtree.printTree(testtree);
	testtree.search(5);
	
} 	
