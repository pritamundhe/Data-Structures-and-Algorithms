#include "bits/stdc++.h"
using namespace std;

int solve(vector<int> &a, int x){
    int r=a.size();
    int res = -1;
    for(int i=0; i<r; i++){
        for(int j=i; j<r; j++){
            if(a[i]+a[j]==x){
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }
    return res;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(solve(a,x)==-1){
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}