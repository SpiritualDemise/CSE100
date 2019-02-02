#include<cstdlib>
#include<iostream>
using namespace std;

int partition(int a[],int p,int r){
int x = a[r];
int i = p - 1;
for(int j = p; j < r ;j++){
	if(a[j] <= x){
	i++;
	swap(a[i],a[j]);
	}
}

swap(a[i+1],a[r]);
return (i + 1);
}

int randompartition(int a[],int p,int r){
srand(time(NULL));

int i = p + rand() % (r - p);
swap(a[r],a[i]);
return partition(a,p,r);
}

void randomquicksort(int a[],int p,int r){
if(p < r){
int q = randompartition(a,p,r);
randomquicksort(a,p,q - 1);
randomquicksort(a,q + 1,r);
}
}

void print(int a[], int size){
for(int i = 0; i < size;i++){
cout << a[i] << ";";
}
}

int main(){
int size;
cin >> size;
int b;
int* a = new int[size];
for(int i = 0;i < size;i++){
cin >> b;
a[i] = b;
}
int p = 0;
int r = size;

randomquicksort(a,p,r-1);
print(a,size);
return 0;

}
