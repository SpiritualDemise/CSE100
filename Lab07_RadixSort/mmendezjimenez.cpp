#include<vector>
#include<iostream>
using namespace std;


vector<vector<int>> countingsort(vector<vector<int>> list, int indexoflist, int size){

vector<vector<int>> sorted;
sorted.resize(size);

for(int i = 0; i < list.size();i++){

sorted[i].resize(10);

}

int c[10] = {0,0,0,0,0,0,0,0,0,0};

for(int i = 0; i < list.size();i++){

c[list[i][indexoflist]]++;

}

for(int i = 1; i < 10; i++){

c[i] = c[i-1] + c[i];

}

for(int i = size - 1; i >= 0; i--){

sorted[c[list[i][indexoflist]] - 1] = list[i];
c[list[i][indexoflist]]--;

}

return sorted;

}




vector<vector<int>>  radixsort(vector<vector<int>> list, int size){

int indexoflist = 9;
vector<vector<int>> result = list;
while(indexoflist >= 0){

result = countingsort(result,indexoflist,size);
indexoflist = indexoflist - 1;

}

return result;

}

vector<vector<int>> print(vector<vector<int>> list, int size){

for(int i = 0; i < size; i++){
	for(int j=0; j < 10; j++){
		cout << list[i][j] << ";" ;
		}
	cout << endl;
	}

return list;
}


int main(){

int size;
cin >> size;
int b;
int index = 9;
vector<vector<int>> list;

for(int i = 0; i < size; i++){
vector<int>a;

	for(int j=0; j <= index; j++){
	cin >> b;
	a.push_back(b); 
}

list.push_back(a);

}

list = radixsort(list,size);
print(list,size);
 return 0;
}
