#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <iostream>




using namespace std;
int main (){ 
	int largest=0;
	int largestNum=0;
	int numbers[10] = {0}; 
	int secret; 
	srand(time(NULL)); 

	for(int j=1; j<=10; j++){
		secret = rand() % 10 + 1; 
		printf("%d\n", secret); 
		for(int k=1; k<=10; k++){ 
			if(k==secret){ 
				numbers[k]++; 	
			}
		}
	}
	for(int j=1; j<=10; j++){ 
		printf("the amout of %d 's is %d\n",j, numbers[j]);
	} 
	for(int j=1; j<=10; j++){ 
		if(numbers[j]>largest){ 
			largest = numbers[j];
			largestNum = j;
		}
	}	
	puts("\n");
	printf("The largest integer %d appears %d times\n", largestNum, largest);
	return 0;
}
	int largest
