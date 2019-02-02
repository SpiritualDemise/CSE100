// mmendezjimenez100249014.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;
int main()
{
	int size, num, key, j, k;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> num;
		arr[i] = num;
	}
	for (j = 1; j < size; j++) {
		key = arr[j];
		k = j - 1;
		while (k >= 0 && arr[k] > key) {
			arr[k + 1] = arr[k];
			k = k - 1;
		}
		arr[k + 1] = key;
	}
	for (int i = (size - 1); i >= 0; i--) {
		cout << arr[i] << ";";
	}
	return 0;
}

