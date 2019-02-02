#include<iostream>
#include<climits>

using namespace std;


void print(int* s,int i,int j,int n){

if(i == j){

cout << "A" << i - 1;

}

else{

cout << "(";
print(s,i,*((s + i * n) + j),n);
cout << ".";
print(s,*((s + i * n) + j) + 1,j,n);
cout << ")";

}

}


void mco(int p[], int n){

int m[n][n];
int s[n][n];
int j = 0;
int q = 0;

for(int i = 1; i < n;i++){

	m[i][i] = 0;
}
		for(int l = 2;l < n;l++){

			for(int i = 1; i < n - l + 1;i++){

				j = i + l - 1;
				m[i][j] = INT_MAX;

				for(int k = i; k <= j - 1;k++){

					q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);

						if(q < m[i][j]){

							m[i][j] = q;
							s[i][j] = k;

						}

				}

			}

		}




cout << m[1][n - 1] << endl;
print((int *)s,1,n-1,n);
cout << endl;

}




int main(){

int b = 0;
int n = 0;
cin >> n;

n++;

int* p = new int[n];

for(int i = 0;i < n;i++){

cin >> b;
p[i] = b;

}

mco(p,n);




return 0;

}
