// copied 
#include "bits/stdc++.h"

using namespace std;

#define int long long

void chocolateDistributionProblem(int arr[], int n, int m){
    int ans=INT_MAX;
    sort(arr, arr+n);
    for (int i=0; i+m-1<n; i++){
        int temp=arr[i+m-1]-arr[i];
        ans=min(ans, temp);
    }
    cout << ans << endl;
}

int32_t main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    chocolateDistributionProblem(arr, n, m);
    return 0;
}