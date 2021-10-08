#include "bits/stdc++.h"

using namespace std;

void countPairsWithGivenSum(int arr[], int n, int k){
    int ans=0;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            int temp=arr[i]+arr[j];
            if (temp == k){
                ans++;
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
    int k;
    cin >> k;
    countPairsWithGivenSum(arr, n, k);
    return 0;
}