#include "bits/stdc++.h"

using namespace std;

#define int long long

void trappingRainWater(int arr[], int n){
    int l=0;
    int r=n-1;
    int level=0;
    int water=0;
    while (l<r){
        int lower=arr[arr[l] < arr[r] ? l++ : r--];
        level = max(level, lower);
        water+=level-lower;
    }
    cout << water << endl;
}

int32_t main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    trappingRainWater(arr, n);
    return 0;
}