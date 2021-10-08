#include "bits/stdc++.h"

using namespace std;

int main(){
    int n; 
    cin >> n;
    int z=0, o=0, t=0;
    for (int i=0, temp; i<n; i++){
        cin >> temp;
        if (temp == 0){
            z++;
        }
        else if (temp == 1){
            o++;
        }
        else if (temp == 2){
            t++;
        }
    }
    for (int i=0; i<z; i++){
        cout << '0' << "\t";
    }
    for (int i=0; i<o; i++){
        cout << '1' << "\t";
    }
    for (int i=0; i<t; i++){
        cout << '2' << "\t";
    }
    cout << endl;
    return 0;
}