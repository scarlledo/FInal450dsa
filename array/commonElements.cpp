#include "bits/stdc++.h"

using namespace std;

void commonElements(int a[], int n1, int b[], int n2, int c[], int n3){
    vector<int> ans;
    int i=0, j=0, k=0;
    int lst=INT_MIN;
    while(i<n1 && j<n2 && k<n3){
        if (a[i] == b[j] && b[j] == c[k] && lst != a[i]){
            ans.push_back(a[i]);
            lst=a[i];
            i++;
        }
        else if(min(a[i], min(b[j], c[k])) == a[i]){
            i++;
        }
        else if(min(a[i], min(b[j], c[k])) == b[j]){
            j++;
        }
        else if(min(a[i], min(b[j], c[k])) == c[k]){
            k++;
        }
    }
    for(auto i: ans){
        cout << i << "\t";
    }
    cout << endl;
}

int main(){
    int n1;
    cin >> n1;
    int a[n1];
    for (int i=0; i<n1; i++){
        cin >> a[i];
    }
    int n2;
    cin >> n2;
    int b[n2];
    for (int i=0; i<n2; i++){
        cin >> b[i];
    }
    int n3;
    cin >> n3;
    int c[n3];
    for (int i=0; i<n3; i++){
        cin >> c[i];
    }
    commonElements(a, n1, b, n2, c, n3);
    return 0;
}