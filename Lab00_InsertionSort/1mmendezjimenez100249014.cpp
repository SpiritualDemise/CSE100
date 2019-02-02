// mmendezjimenez100249014.cpp : Defines the entry point for the console application.
//


#include<iostream>
using namespace std;

void insertionsort(int A[], int n) {

	int i, key, j;
	for (i = 1; i < n; i++) {
		key = A[i];
		j = i - 1;

		while (j >= 0 && A[j] < key) {
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
}

void printA(int A[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << A[i] << ";";
	}
}

int main()
{
	int n;
	int size;
	cin >> size;
	int* A = new int[size];
	for (int i = 0; i < size; i++){
	cin >> n;
	A[i] = n;
	} 

	insertionsort(A, n);
	printA(A, n);

	return 0;
}
