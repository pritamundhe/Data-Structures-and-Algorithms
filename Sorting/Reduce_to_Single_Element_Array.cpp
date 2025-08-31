#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    bool status = false;
    for(int i=1; i<n; i++){
        if(abs(arr[i]-arr[i-1])>1){
            status = true;
            break;
        }
    }
    if(status){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

}

/*
Sample Input
4
4 1 3 2

Your Output
YES

*/