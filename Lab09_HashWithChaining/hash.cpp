#include<iostream>
using namespace std;

struct Node{

	int data;
	Node* next;

	Node(){
}

	Node(int data){
	this->data = data;
	next = NULL;
    }

};

struct HashTable{

	Node** array;
	int size;

	HashTable(int size){

	array = (Node**)malloc(sizeof(Node*) * size);

	for(int i = 0; i < size; i++){
	array[i] = NULL;
	}

	this->size = size;
}

int hash(int value){

	int x = value % size;
	return x;
}

void insert(int value){

	Node* x = new Node(value);
	hash(value);

	if(array[hash(value)] = NULL){
	array[hash(value)] = x;
	}
	else{
	Node* y;

	array[hash(value)] = y;
	array[hash(value)] = x;
	array[hash(value)]->next = y;
}
}

bool search(int value){
	int curr = hash(value);
	Node* random = array[curr];
	while(random->next != NULL){

	if(random->data == value){
	return true;
}
	random == random->next;
}

return false;

}

void print(){
	for(int i = 0; i < size; i++){
		Node* curr = array[i];
		if(curr != NULL){
			while(curr != NULL){
				cout << curr << ":";
				cout << curr->data << "->";
				curr = curr->next;
			}
			cout << endl;
		}
	}
}

void remove(int num){


}


~HashTable(){
free(array);
}
};


int main(){
int m;
string input;
int num = 0;
cin >> m;

HashTable c = HashTable(m);

while(input != "e"){

cin >> input;

if(input == "i"){
	cin >> num;
	c.insert(num);
}

if(input == "d"){
	cin >> num;
	//c.remove(num);
	cout << "++++++++++++++++++++" << endl;
}

if(input == "s"){
	cin >> num;
	c.search(num);
	cout << "++++++++++++++++++++" << endl;
}

if(input == "o"){
	
	c.print();
	cout << "++++++++++++++++++++" << endl;
}

}

return 0;
}
