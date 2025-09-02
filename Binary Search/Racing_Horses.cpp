#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(mn>abs(s[i]-s[j])){
                    mn = abs(s[i]-s[j]);
                }
            }
        }
        cout<<mn;
    }

}
