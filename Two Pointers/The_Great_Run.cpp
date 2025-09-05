#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int i=0;
        int mx = 0;
        while(i<=n-x){
            int j= i;
            int sum = 0;
            while(j<i+x){
                sum+=a[j];
                j++;
            }
            i++;
            mx = max(mx,sum);
        }
        cout<<mx<<endl;
    }
    return 0;
}

/*
Sample Input
1
7 2
2 4 8 1 2 1 8
Your Output
12
*/