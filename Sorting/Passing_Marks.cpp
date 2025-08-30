#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1; i<100; i++){
            int passed = 0;
            for(int j=0; j<n; j++){
                if(arr[j]>i){
                    passed++;
                }
            }
            if(passed>=x){
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}