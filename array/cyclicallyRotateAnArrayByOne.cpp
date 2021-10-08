#include "bits/stdc++.h"

using namespace std;

void cyclicallyRotateAnArrayByOne(int arr[], int n){
    vector<int> ans;
    ans.push_back(arr[n-1]);
    for (int i=0; i<n-1; i++){
        ans.push_back(arr[i]);
    }
    for (auto i: ans){
        cout << i << "\t";
    }
    cout << endl;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cyclicallyRotateAnArrayByOne(arr, n);
    return 0;
}