#include<iostream>
using namespace std;

void merge(int a[], int l, int m, int r){
	int l1 = m - l + 1;
	int r1 = r - m;
	int temp1[l1];
	int temp2[r1];
	for(int i = 0; i < l1; i++){
	temp1[i] = a[l+i];
	}
	for(int j = 0; j < r1;j++){
	temp2[j] = a[m + 1 + j];
	}
	int i = 0;
	int j = 0;
	int k = l;
	while(i < l1 && j < r1){
	if(temp1[i] <= temp2[j]){
	a[k] = temp1[i];
	i++;
	}
	else{
	a[k] = temp2[j];
	j++;
	}
	k++;
	}
	while(i < l1){
	a[k] = temp1[i];
	i++;
	k++;
}
	while(j < r1){
	a[k] = temp2[j];
	j++;
	k++;
}
}



void mergesort(int a[], int l, int r){
	if(l < r){
	int m = (l + r)/2;
	mergesort(a, l, m);
	mergesort(a, m + 1, r);
	merge(a, l, m, r);
	}
}



void print(int a[],int size){
for(int i = 0; i < size; i++){
	cout << a[i] << ";"; 
}

}

int main(){
	int size;
	int b;
	cin >> size;
	int* a = new int[size];
	for(int i = 0;i < size;i++){
	cin >> b;
	a[i] = b;
	}
	int l = 0;
	int r = size  - 1;
	mergesort(a,l,r);
	print(a,size);
return 0;
}
