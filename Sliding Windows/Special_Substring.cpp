#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0, j=0;
        map<char,int> mp;
        int maxsize = INT_MIN;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>s[j]-'a'+1){
                mp[s[i]]--;
                i++;
            }
            maxsize = max(maxsize,j-i+1);
            j++;
        }
        cout<<maxsize<<endl;
    }
}