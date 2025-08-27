#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min=a[0];
    int max=a[n-1];
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<min<<" "<<max<<endl;
}

/*
Sample Input
10
4 3 53 13 2 44 55 35 56 34

Your Output
2 56
*/