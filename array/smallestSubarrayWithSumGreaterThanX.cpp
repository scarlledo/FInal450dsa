// took a little help from net 
#include "bits/stdc++.h"

using namespace std;

void smallestSubarrayWithSumGreaterThanX(int arr[], int n, int k){
    int sum=0;
    int s=0, e=0, res=INT_MAX;
    while(e!=n){
        sum+=arr[e++];
        bool mila=false;
        while(sum>k){
            if(sum>k){
                mila=true;
            }
            sum-=arr[s];
            res=min(res, e-s);
            s++;
            if(sum==k && mila){
                break;
            }
        }
    }
    cout << res << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    smallestSubarrayWithSumGreaterThanX(arr, n, x);
    return 0;
}