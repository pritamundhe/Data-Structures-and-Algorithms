#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        int i=0, j = 1;
        bool found = false;
        while(i<n && j<n){
            if(i!=j && a[j]-a[i]==q){
                found=true;
                break;
            }else if(a[j]-a[i]<q){
                j++;
            }else{
                i++;
            }
            if(i==j){
                j++;
            }
        }
        if(found){
            cout<<'1'<<endl;
        } else{
            cout<<'0'<<endl;
        }
    }
    return 0;
}

/*
Sample Input
3
6 78
5 10 3 2 50 80
2 30
-10 20
4 5
1 2 3 4
Your Output
1
1
0
*/