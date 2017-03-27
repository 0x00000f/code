#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

#define N 10
int M=1;

bool is_sorted(int *a, int n)
{
	  while ( --n >= 1 ) {
   	 if ( a[n] < a[n-1] ) return false;
  	}
	  return true;
}
 
//void shuffle(int *a, int n)
void shuffle(int *a, int n)
{
	int i, t, r;
  	for(i=0; i < n; i++) {
    t = a[i];
    r = rand() % n;
    a[i] = a[r];
    a[r] = t;
  }

	

  //printing out each permuation
	for (i=0; i < N; i++) printf("%d ", a[i]);
	printf("\n");
  	//usleep(10000);
	M++;
}
 
void bogosort(int *a, int n)
{
  	while ( !is_sorted(a, n) ) shuffle(a, n);
}
 
int main()
{
	srand(time(NULL));
	int secret, j, i;
	int numbers[N];	 
	for (j=0; j<N; j++){ 
		secret = rand() % 9 + 1;
		numbers[j] = secret;
	}		

  	bogosort(numbers, N);
  	for (i=0; i < N; i++) printf("%d ", numbers[i]);
  	printf("\n");
	printf("\n");
  	printf("This Bogosort completed in %d permutations.", M);
	printf("\n");

}
