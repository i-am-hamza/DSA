#include <bits/stdc++.h>
using namespace std;

void removeDuplicateArrays(int arr[], int size){
    int i = 0;
    for(int j = 1; j < size; j++){
    	if(arr[i] != arr[j]){
    		i++;
    		arr[i] = arr[j];
    	}
    }

    cout << i + 1;

    for(int j = 0; j < size; j++){
    	cout << arr[j] << " ";
    }
}

int main(){
int size = 0;
cin >> size;

int arr[size];

for(int i = 0; i < size; i++){
    cin >> arr[i];
}


removeDuplicateArrays(arr, size);
return 0;
}