#include "bits/stdc++.h"

using namespace std;

void minimumNumberOfJump(int arr[], int n){
    int ans=0, temp=arr[0];
    for (int i=1; i<n-1; i++){
        if ((arr[i] % temp) == 0){
            ans++;
            temp=arr[i];
        }
    }
    if (ans == 0){
        cout << -1 << endl;
    }
    else{
        ans++;
        cout << ans << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    minimumNumberOfJump(arr, n);
    cout << endl;
    return 0;
}