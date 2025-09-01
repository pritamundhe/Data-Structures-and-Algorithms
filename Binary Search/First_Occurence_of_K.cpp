#include "bits/stdc++.h"
using namespace std;

int solve(vector<int> &arr, int n, int k){
    int res = -1;
    int l = 0, r = n-1;
    while(l<=r){ // Important
        int mid = l+(r-l)/2;
        if(arr[mid]==k){
            res = mid;
            r = mid-1;
        }else if(arr[mid]>k){
            r = mid-1;
        }
        if(arr[mid]<k){
            l = mid+1;
        }
    }
    return res;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<solve(arr,n,k);
    return 0;
}