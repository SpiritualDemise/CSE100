#include<iostream>
using namespace std;

void MaxHeapify(int a[], int i, int size){

int l = (i*2);
int r = ((i*2)+1);
int largest = 0;

if(l <= size-1 && a[l] > a[i]){
largest = l;
}

else{
largest = i;
}

if(r <= size-1 && a[r] > a[largest]){
largest = r;
}

if(largest != i){
swap(a[i],a[largest]);
MaxHeapify(a,largest,size-1);
}

}

void BuildMaxHeap(int a[],int size){
//a.heapsize = a.length
for(int i = (size)/2 ; i >= 0 ;i--){
MaxHeapify(a,i,size-1);
}

}

void heapsort(int a[], int size){

BuildMaxHeap(a,size-1);

for(int i = size-1; i >= 1; i--){
swap(a[0],a[i]);
//a.heapsize = a.heapsize - 1
MaxHeapify(a,0,i);

}

}

void print(int a[],int size){

for(int i = 0; i < size; i++){
cout << a[i] << ";";
}

}


int main(){
int size;
cin >> size;
int b;
int * a = new int[size];
for(int i = 0; i < size;i++){
cin >> b;
a[i] = b;
}
BuildMaxHeap(a,size);
heapsort(a,size);
print(a,size);

return 0;
}
