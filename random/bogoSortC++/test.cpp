#include <iostream>
#include <time.h>
#include <stdio.h> 
#include <stdlib.h> 
 
#define N 1000	
using namespace std; 
int main() {
	srand(time(NULL));
   	int a[N];
	int secret;
	for (int i=0; i<N; i++){ 
		secret = rand() % 1000 + 1; 
		a[i] = secret;
	}
	
	for (int j=0; j<N; j++){ 
	cout << a[j] << endl;
	}
}


