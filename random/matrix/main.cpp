#include <stdio.h> 
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std; int main (){ srand(time(NULL)); int secret; for(int j=0; j<100000; j++){ for(int i=1; i<=80; i++){ secret = rand() % 9 + 1; cout << secret;	} }  return 0; } 
/*
using namespace std; 
int main (){ 

	srand(time(NULL)); 
	int secret;
	for(int j=0; j<1000000; j++){ 
			for(int i=1; i<=80; i++){
				secret = rand() % 9 + 1; 
				cout << secret;	
				
			}
	}
	cout << endl;

	return 0; 

}

*/
