#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <time.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h>
#include <sys/times.h>
#include <sys/time.h>
#include <sys/resource.h>

#define N 10

template <typename RandomAccessIterator, typename Predicate>
void bogo_sort(RandomAccessIterator begin, RandomAccessIterator end,
               Predicate p) {
  std::random_device rd;
  std::mt19937 generator(rd());
  while (!std::is_sorted(begin, end, p)) {
    std::shuffle(begin, end, generator);
  }
}
 
template <typename RandomAccessIterator>
void bogo_sort(RandomAccessIterator begin, RandomAccessIterator end) {
  bogo_sort(
      begin, end,
      std::less<
          typename std::iterator_traits<RandomAccessIterator>::value_type>());
}
 
int main() {
	struct rusage start;
    struct rusage end;

	srand(time(NULL));
   	int a[N];
	int secret;
	for (int i=0; i<N; i++){ 
		secret = rand() % 10 + 1; 
		a[i] = secret;
	}
  /*	asm volatile (
		"cpuid\n\t"
		"rdtscp\n\t"
		"movl %%eax, %0\n\t"
		: "=r" (start_time)
		:
		: "rax", "rbx", "rcx", "rdx"
		);
*/		
    	getrusage(RUSAGE_SELF, &start);
  		
		bogo_sort(std::begin(a), std::end(a));

    	getrusage(RUSAGE_SELF, &end);

/*		asm volatile (
		"cpuid\n\t"
		"rdtscp\n\t"
		"movl %%eax, %0\n\t"
		: "=r" (end_time)
		:
		: "rax", "rbx", "rcx", "rdx"
		);
		*/
		//int a[] = {100, 2, 56, 200, -52, 3, 99, 33, 177, -199};
  	copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
	
	//int time = end_time - start_time;
    long time = end.ru_utime.tv_usec - start.ru_utime.tv_usec;
	printf("\n");




    printf("It took %ld microseconds to Bogo sort this random array.\n", time);
  	//std::cout << time << "\n";
  	std::cout << "\n";
}
