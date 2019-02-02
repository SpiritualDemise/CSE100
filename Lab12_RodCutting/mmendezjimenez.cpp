#include<iostream>
#include<climits>

using namespace std;

void printr(int s[],int n){

while(n > 0){

cout << s[n] << endl;
n = n - s[n];

}

}

void prints(int s[],int n){

int i = -1;

while(n > 0){

cout << s[n] << " ";
n = n - s[n];

}

cout << i << endl;

}

void ebucr(int price[],int n){

int r[n + 1];
int s[n];
r[0]= 0;

for(int j = 1; j <= n;j++){

	int q = INT_MIN;

	for(int i =1; i <= j;i++){

		if( q < price[i - 1] + r[j - i]){

			q = price[i - 1] + r[j - i];
			s[j] = i;

		}

	}

	r[j] = q;

}

printr(r,n);
prints(s,n);

}



int main(){
int p = 0;
int n = 0;
cin >> n;
int* price = new int[n];

for(int i = 0; i < n; i++){

	cin >> p;
	price[i] = p;


}

int* s = new int[n];


ebucr(price,n);

return 1;
}
