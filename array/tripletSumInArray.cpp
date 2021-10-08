#include "bits/stdc++.h"

using namespace std;

void tripletSumInArray(int arr[], int n, int x){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            for (int k=j+1; k<n; k++){
                int temp=arr[i]+arr[j]+arr[k];
                if (temp == x){
                    cout << "YES" << endl;
                    return ;
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    tripletSumInArray(arr, n, x);
    return 0;
}