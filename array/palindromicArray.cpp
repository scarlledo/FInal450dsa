#include "bits/stdc++.h"

using namespace std;

bool palin(int n){
    int rev=0;
    int temp=n;
    int digit;
    do{ 
        digit=temp%10;
        rev=(rev*10)+digit;
        temp/=10;
    }while(temp != 0);
    if (rev == n){
        return true;
    }
    return false;
}

void palindromicArray(int arr[], int n){
    for (int i=0; i<n; i++){
        if (!palin(arr[i])){
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    for (;t;t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        palindromicArray(arr, n);
    }
}