#include "bits/stdc++.h"

using namespace std;

void findAllElement(int arr[], int n, int k){
    int ans=0; 
    int target=n/k;
    sort(arr, arr+n);
    for (int i=0; i<n; i++){
        int temp=1;
        int curr=arr[i];
        for (int j=i+1; j<n; j++){
            if (curr==arr[j]){
                temp++;
            }
        }
        if (temp>target){
            ans++;
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
    findAllElement(arr, n, k);
    return 0;
}