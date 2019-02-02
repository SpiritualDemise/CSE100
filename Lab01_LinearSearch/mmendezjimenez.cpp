#include<iostream>
using namespace std;

int linearsearch(int a[],int size,int key){

for(int i = 0; i < size; i++){
	if(a[i] == key){
	cout << i << endl;
	return i;
}
}
cout << "-1" << endl;
return 0;
}



int main(){

int size;
int key;
cin >> size;
cin >> key;
int n;
int* a = new int[size];

for(int i = 0; i < size;i++){
cin >> n;
a[i]=n;
}

linearsearch(a,size,key);


}
