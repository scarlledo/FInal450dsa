#include "bits/stdc++.h"

using namespace std;

void findTheMedian(int arr[], int n){
    sort(arr, arr+n);
    if (n%2!=0){
        int mid=n/2;
        cout << arr[mid] << endl;
    }
    else{
        int nl=(n/2)-1;
        int nr=(n/2);
        cout << ((arr[nl]+arr[nr])/2) << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    findTheMedian(arr, n);
    return 0;
}