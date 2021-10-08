// copied 
// not mine 
#include "bits/stdc++.h"

using namespace std;

int partition(int arr[], int n){
    int j=0;
    int pivot=0;
    for (int i=0; i<n; i++){
        if (arr[i] < pivot){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return j;
}

void rearrageArrayInAlternatingPositiveNegativeItem(int arr[], int n){
    int p = partition(arr, n);
    for (int i=0; (p<n && i<p); p++, i+=2){
        swap(arr[i], arr[p]);
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << "\t";
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
    rearrageArrayInAlternatingPositiveNegativeItem(arr, n);
    return 0;
}