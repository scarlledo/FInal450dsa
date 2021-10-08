#include "bits/stdc++.h"

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    int nn=n+m;
    arr.resize(nn);
    for (int i=0; i<nn; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << sizeof(unique(arr.begin(), arr.end())) << endl;
    return 0;
}