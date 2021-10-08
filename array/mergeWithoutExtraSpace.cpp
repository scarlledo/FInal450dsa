#include "bits/stdc++.h"

using namespace std;

void merge(int a[], int n, int b[], int m){
    int nn=n+m;
    vector<int> arr;  
    for (int i=0; i<n; i++){
        arr.push_back(a[i]);
    }
    for (int i=0; i<m; i++){
        arr.push_back(b[i]);
    }
    sort(arr.begin(), arr.end());
    for (auto i:arr){
        cout << i << "\t";
    }
    cout << endl;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<m; i++){
        cin >> b[i];
    }
    merge(a, n, b, m);
    return 0;
}