#include<iostream>
#include<climits>
using namespace std;

int maxoftwo(int a, int b){
if (a > b){
return a;
}
else{
return b;
}
}

int finalmax(int a,int b, int c){
return maxoftwo(maxoftwo(a,b),c);
}



int fmcs(int a[], int low, int mid, int high){

int leftsum = INT_MIN;
int sum = 0;

for(int i = mid; i >= low; i--){
sum = sum + a[i];
	if(sum > leftsum){
	leftsum = sum;
	
}
}
int rightsum = INT_MIN;
sum = 0;

for(int j = mid + 1; j <= high; j++){
sum = sum + a[j];
	if(sum > rightsum){
	rightsum = sum;
	
}
}

return(leftsum + rightsum);
}


int fms(int a[], int low, int high){

if(high == low){
return a[low];
}
else{

int mid = (low + high) / 2;

return finalmax(fms(a,low, mid),fms(a,mid+1,high),fmcs(a,low,mid,high));

}

}






int main(){

int size;
cin >> size;
int b;
int* a = new int[size];
for(int i = 0; i < size;i++){
cin >> b;
a[i] = b;
}

int low = 0;
int high = size - 1;

int maxsum = fms(a,low,high);

cout << maxsum;

return 0;
}
