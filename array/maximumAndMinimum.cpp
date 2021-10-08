#include "bits/stdc++.h"

using namespace std;

void minAndMax(int arr[], int n){
    int mi=INT_MAX, mx=INT_MIN;
    for (int i=0; i<n; i++){
        if (arr[i] > mx){
            mx=arr[i];
        }
        if (arr[i] < mi){
            mi=arr[i];
        }
    }
    cout << mi << "\t" << mx << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    minAndMax(arr, n);
    cout << endl;
    return 0;
}