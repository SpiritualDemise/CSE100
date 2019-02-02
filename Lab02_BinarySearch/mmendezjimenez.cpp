#include<iostream>
using namespace std;


int binarysearch(int a[], int size, int key){

	int low = 0;
	int high = size  - 1;
	int mid ;

	while (low <= high){
	mid = (low + high) / 2;
	if( key == a[mid]){
	cout << mid;
	return mid;
}
	else if( key > a[mid]){
	low = mid + 1;
}
	else{
	high = mid - 1;
}

}
	cout << "-1";
	return 0;
}

int main(){
	int size;
	int b;
	cin >> size;
	int* a = new int[size];
	int key;
	cin >> key;
	for(int i = 0; i < size; i++){
	cin >> b;
	a[i] = b;
}
	binarysearch(a,size,key);

}
