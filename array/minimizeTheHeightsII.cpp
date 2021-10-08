#include "bits/stdc++.h"

using namespace std;

// mayank
void solution(int arr[], int n, int k){
    sort(arr, arr+n);
    int ans=arr[n-1]-arr[0];
    int mx, mi;
    for (int i=n-1; i>=0; i--){
        if (arr[i] >= k){
            mi = min(arr[i]-k, arr[0]+k);
            mx = max(arr[i-1]+k, arr[n-1]-k);
        }
        ans = min(ans, mx-mi);
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
    solution(arr, n, k);
    return 0;
}