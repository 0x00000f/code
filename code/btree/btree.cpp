#include <stdlib.h>
#include "btree.h"
btree::btree(){
    root = NULL; 
} 

btree::~btree(){ 
    destroy_tree(); //will be created later
} 

void btree::destroy_tree(node *leaf){ 
    if(leaf != NULL){ 
        destroy_tree(leaf -> left);
        destroy_tree(leaf -> right);
        delete leaf;
    } 
} 

void btree::insert(int key, node *leaf){ 
    if(key < leaf->key_value) { 
        insert(key, leaf->left); 

		if(leaf -> left != NULL){
			insert (key, leaf -> left);
		}  
    	else{  
        	leaf -> left = new node; 
        	leaf -> left -> key_value = key; 
        	leaf -> left -> left = NULL; 
        	leaf -> left -> right = NULL; 
		} 
    }
	else if (key >= leaf -> key_value){ 
		if(leaf -> right != NULL){ 
			insert(key, leaf -> right);
		} 
		else{ 
			leaf -> right = new node; 
			leaf -> right -> key_value=key;
			leaf -> right -> left = NULL;
			leaf -> right -> right = NULL;
		}
	} 
} 
     

node *btree::search(int key, node *leaf){ 
	if(leaf != NULL){ 
		if(key == leaf -> key_value){ 
			return leaf;
		} 
		if (key < leaf -> key_value){ 
			return search(key, leaf->left);
		}
		else{
			return search(key, leaf->right);
		}
   	} 
   	else{ 
		return NULL;
	} 
}

//public functions
void btree::insert(int key){ 
	if(root != NULL){ 
		insert(key, root);
	}
	else{ 
		root = new node;
		root -> key_value = key;
		root -> left = NULL;
		root -> right = NULL;
	} 
} 



//keeping it from being necessary for the user to have access to the root node
node *btree::search(int key){ 
	return search(key,root);
}	
//recursive delete
void btree::destroy_tree(){ 
	destroy_tree(root);
}


