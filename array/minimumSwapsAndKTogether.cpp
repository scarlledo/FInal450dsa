#include "bits/stdc++.h"

using namespace std;

void minimumSwapsAndKTogether(int arr[], int n, int k){
    int ans=0;
    unordered_set<int> mp;
    for (int i=0; i<n; i++){
        bool mila=false;
        if ((arr[i] > k) && (mp.find(arr[i]) == mp.end())){
            for (int j=i+1; j<n; j++){
                if (arr[j] <= k && !mila){
                    mp.insert(arr[j]);
                    swap(arr[i], arr[j]);
                    mila=true;
                    break;
                }
            }
        }
        if (mila){
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
    minimumSwapsAndKTogether(arr, n, k);
    return 0;
}