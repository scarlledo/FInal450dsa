// copied 
#include "bits/stdc++.h"

using namespace std;

bool solution(int arr[], int n){
    unordered_set<int> st;
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
        if (st.count(sum)==1 || arr[i]==0 || sum==0){
            return true;
        }
        st.insert(sum);
    }
    return false;
}

void subarrayWithZeroSum(int arr[], int n){
    if (solution(arr, n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    subarrayWithZeroSum(arr, n);
    return 0;
}