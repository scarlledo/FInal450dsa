#include "bits/stdc++.h"

using namespace std;

void reverseArray(int arr[], int n){
	int start=0, end=n-1;
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	reverseArray(arr, n);
	for (int i=0; i<n; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}
