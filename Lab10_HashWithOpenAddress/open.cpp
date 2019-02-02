#include<iostream>
using namespace std;

int hashkey(int key, int i){

int h1 = key % 13;
int h2 = 1 + (key % 11);
int h = (h1 + (i * h2)) % 13;

return h;

}


void hashinsert(int T[], int key, int size){

int i = 0;
int j = 0;
int m = size;

	do{

	j = hashkey(key, i);

	if(T[j] == -1){
		T[j] = key;

		break;
	}
	else{
	i++;
	}

}while(i != m);

}

int hashsearch(int T[], int key, int size){

int i = 0;
int j = 0;
int m = size;

	do{

	j = hashkey(key,i);

	if(T[j] == key){
	return j;
	}
	i++;

}while(T[j] == -1 || i <= size);

return -1;

}
void hashdelete(int T[],int key, int size){

int j = hashsearch(T,key,size);

if(j == -1){
	T[j] = -1;
}

}

void print(int T[],int size){

for(int i = 0; i < size;i++){

	cout << T[i] << endl;

}

}


int main(){

int m = 13;
int key = 0;
cin >> key;
int* T = new int [m];



}
