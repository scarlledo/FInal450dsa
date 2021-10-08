#include "bits/stdc++.h"

using namespace std;

void factorial(int n){
    vector<int> ans;
    ans.push_back(1);
    for (int x=2; x<=n; x++){
        int carry=0;
        for (int i=0; i<ans.size(); i++){
            int prod=ans[i]*x+carry;
            ans[i]=prod%10;
            carry=prod/10;
        }
        while(carry!=0){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto i: ans){
        cout << i;
    }
    cout << endl;
}

int main(){
    int n; 
    cin >> n;
    factorial(n);
    return 0;
}