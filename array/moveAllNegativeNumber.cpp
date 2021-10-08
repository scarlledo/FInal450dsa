#include "bits/stdc++.h"

using namespace std;

void negative(int arr[], int n){
    int j=0; 
    for (int i=0; i<n; i++){
        if (arr[i] < 0){
            if (i != j){
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << "\t";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    negative(arr, n);
    cout << endl;
    return 0;
}