#include "bits/stdc++.h"

using namespace std;

#define int long long 

void maximumProductSubarray(int arr[], int n){
    int prod=0;
    for (int i=0; i<n; i++){
        int temp=arr[i];
        for (int j=i+1; j<n; j++){
            prod=max(temp, prod);
            temp*=arr[j];
        }
        prod=max(prod, temp);
    }
    cout << prod << endl;
}

int32_t main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    maximumProductSubarray(arr, n);
    return 0;
}