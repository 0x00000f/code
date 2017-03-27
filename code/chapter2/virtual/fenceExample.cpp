#include <iostream>
#include <stdlib.h>
using namespace std;


class Fence
{
    public:
       virtual void numPosts(){ 
         	cout << "basic fence.\n"; 
	   }
	private: 
		int fenceNum; 
};

class electricFence : public Fence
{
    public:
	   void  numPosts(){ 
         	cout << "Electric Fence.\n"; 
		} 			  
};

class woodFence : public Fence
{ 
  	public: 
       void numPosts(){ 
         	cout << "Wood Fence.\n"; 
		} 
}; 

//added
void func(Fence *example){ 
			example-> numPosts();
}

int main()
{
	
    Fence *f = new Fence;
    electricFence *e= new electricFence;
	/*
    woodFence *w= new woodFence;

    f->numPosts();
    e->numPosts();
    w->numPosts();
*/	
	func(f);
	func(e);
    return 0;
}
