#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int n = s.size();
    int i=0, j=0;
    int ans = 0;
    
    unordered_map<char,int> mp;
    
    while(j<n){
        mp[s[j]]++;
        
        while(mp[s[j]]>1){
            mp[s[i]]--;
            i++;
        }
        
        ans = max(ans,j-i+1);
        j++;
    }
    
    cout<<ans<<endl;
    
    return 0;
}