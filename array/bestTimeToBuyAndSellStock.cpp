#include "bits/stdc++.h"

using namespace std;

void bestTimeToBuyAndSellStock(int arr[], int n){
    int maxProfit=0;
    for (int i=0; i<n-1; i++){
        int temp=0;
        int buy=arr[i];
        for (int j=i; j<n; j++){
            if (arr[j] > buy){
                temp = abs(arr[j]-buy);
                maxProfit = max(maxProfit, temp);
            }
        }
    }
    cout << maxProfit << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    bestTimeToBuyAndSellStock(arr, n);
    return 0;
}