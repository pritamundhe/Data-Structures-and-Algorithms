#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> testcase(n);
        string s;
        for(int i=0; i<n; i++){
            cin>>testcase[i];
        }
        cin>>s;
        int min_num = INT_MAX;
        for(int i=0; i<n; i++){
            if(s[i]!='1' && testcase[i]<min_num){
                min_num=testcase[i];
            }
        }
        cout<<min_num<<endl;
    }
}