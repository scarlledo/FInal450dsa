#include "bits/stdc++.h"

using namespace std;

void longestConsecutiveSubsequence(int arr[], int n){
    sort(arr, arr+n);
    int ans=0;
    for (int i=0; i<n; i++){
        int temp=1, next=arr[i]+1;
        for (int j=i+1; j<n; j++){
            if (arr[j] == next){
                temp++;
                next=arr[j]+1;
            }
        }
        ans=max(ans, temp);
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
    longestConsecutiveSubsequence(arr, n);
    return 0;
}