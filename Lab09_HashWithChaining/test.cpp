#include<String>
#include<iostream>
using namespace std;

struct Node{

	int data;
	Node* next;

	Node(){
	}

	Node(int data){
	this -> data = data;
	next = NULL;
	}
};

struct HashTable{

	Node** array;
	int size;

	HashTable(int size){

	array = (Node**)malloc(sizeof(Node*) * size);

	for(int i = 0; i < size;i++){
	array[i] = NULL;
	}
	this->size = size;
}

int hash(int value){

	int x = value % size;
	return x;

}

void print(){

	for(int i = 0; i < size; i++){
		Node* curr = array[i];
		if(curr != NULL){
			while(curr != NULL){
				cout << curr->data << " ";
				curr = curr->next;
			}
			cour << endl;
		}
	}
}



int main(){

int m; // size of hash
cin >> m;
string input = NULL;// user input
int num = 0; //user input for i,d,s

HashTable c = HashTable(m);

while(input != 'e'){

cin >> input;

if(input == 'o'){

c.print();
cout << "+++++++++++++++++" << endl;

}

}

}
