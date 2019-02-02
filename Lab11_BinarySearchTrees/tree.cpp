#include<iostream>
using namespace std;

struct Node{

	long data;
	Node* left;
	Node* right;
	};

Node* insert(Node* root, long value, long key){

	Node* curr = new Node();
	curr = root;

	while(curr !=  NULL){
		if(value < curr->data){
			curr = curr->left;
		}
		else{
			curr = curr->right;
		}
	}

	return root;
}


void print(Node* root){

	if(root != NULL){
		print(root->left);
		cout << root->data << " ";
		print(root->right);
	}
}



int main(){

	Node* tree = NULL;
	tree = insert(tree, 5);
	tree = insert(tree, 3);
	tree = insert(tree, 4);
	tree = insert(tree, 9);

	print(tree);

return 0;

}
