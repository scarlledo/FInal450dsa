#include "bits/stdc++.h"

using namespace std;

// kadane algorithm 
int kadane(int arr[], int n){
    int ans=0, temp=0;
    for (int i=0; i<n; i++){
        temp += arr[i];
        if (temp < 0){
            temp=0;
        }
        ans=max(ans, temp);
    }
    if (ans == 0){
        ans=-1;
    }
    return ans;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << kadane(arr, n) << endl;
    return 0;
}