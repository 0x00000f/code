#include "node.h"
class btree{ 
	public: 
		btree(); 
		~btree();
		
		void insert(int key);
		node * search(int key); 
		void destroy_tree(); 
		
	private: 
		void destroy_tree(node *leaf); 
		void insert(int key, node *leaf); 
		node *search(int key, node *leaf); 
		
			
		node *root;
}; 
		
					
