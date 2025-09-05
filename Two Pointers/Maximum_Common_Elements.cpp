#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) {cin>>a[i];}
        for(int j=0; j<n; j++) {cin>>b[j];}
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0, j=0;
        int mx=0;
        while(i<=n-1 && j<=n-1){
            if(a[i]==b[j]){
                mx+=1;
            }
            if(a[i]<b[j]){
                i++;
            }else{
                j++;
            }
        }
        cout<<mx<<endl;
    }
}

/*
Sample Input
3
4
1 2 3 4
1 3 4 5
3
2 4 1
1 4 2
1
2
3
Your Output
3
3
0
*/