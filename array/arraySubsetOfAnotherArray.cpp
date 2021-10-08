#include "bits/stdc++.h"

using namespace std;

void arraySubsetOfAnotherArray(int a[], int n, int b[], int m){
    int temp=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (a[i] == b[j]){
                temp++;
            }
        }
    }
    if (temp == m){
        cout << "YES" << endl;
        return ;
    }
    else{
        cout << "NO" << endl;
        return ;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i=0; i<m; i++){
        cin >> b[i];
    }
    arraySubsetOfAnotherArray(a, n, b, m);
    return 0;
}