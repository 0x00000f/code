#include "counter.h"
#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 

using namespace std;
int main (){
	Counter ctr; 
	
	cout << ctr.getCount() << endl; 
	ctr.increaseBy(9); 
	cout << ctr.getCount() << endl; 
	ctr.increaseBy(6); 
	cout << ctr.getCount() << endl; 
} 
