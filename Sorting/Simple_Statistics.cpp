#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        double sum = 0;
        for(int i=k; i<(n-k); i++){
            sum+=a[i];
        }
        double ml = n-2*k;
        double avg = sum/ml;
        cout<<fixed<<setprecision(6)<<avg<<endl;
    }

}

/*
Sample Input
3
5 1
2 9 -10 25 1
5 0
2 9 -10 25 1
3 1
1 1 1

Your Output
4.000000
5.400000
1.000000
*/