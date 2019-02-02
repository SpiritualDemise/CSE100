#include<iostream>
#include<vector>
using namespace std;

//ya matame
//get from previous lab
void insertionsort(vector<float> &b, int size){

for(int i = 1; i < size; i++){

float key = b[i];
int k = i - 1;

	while(k >= 0 && b[k] > key){

	b[k + 1] = b[k];
	k = k - 1;

}

b[k + 1] = key;

}

}


//breaktime
//sudocode = trash
void bucketsort(float list[], int size){

vector<float> b[size];
int indexofb = 0;

for(int i = 0; i < size;i++){

indexofb = size*list[i];
b[indexofb].push_back(list[i]);

}

for(int i = 0; i < size; i++){

insertionsort(b[i],b[i].size());

}

indexofb = 0;

for(int i = 0; i < size;i++){
	for(int j = 0; j < b[i].size();j++){
		list[indexofb] = b[i][j];
		indexofb++;
}
}


}

//easy

void print(float list[], int size){

for(int i  = 0; i < size; i++){

	cout << list[i] << endl;

}

}



int main(){

int size;
cin >> size;
float b;
float* list = new float[size];

for(int i = 0;i < size ;i++){

	cin >> b;
	list[i] = b;
}

bucketsort(list,size);
print(list,size);

return 0;

}

//kill me
