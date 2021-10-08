#include "bits/stdc++.h"

using namespace std;

void countInversions(int arr[], int n){
    int ans=0;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                ans++;
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    countInversions(arr, n);
    return 0;
}