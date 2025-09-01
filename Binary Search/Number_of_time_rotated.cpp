#include "bits/stdc++.h"
using namespace std;

int solve(vector<int> &arr, int n){
    int l = 0, r = n-1;
    while(l<=r){ 
        int mid = l+(r-l)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(arr[prev]>=arr[mid] && arr[next]>=arr[mid]){
            return mid;
        }
        if(arr[l]<=arr[mid]){
            l = mid+1;
        }
        if(arr[r]>=arr[mid]){
            r = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<solve(arr,n);
    return 0;
}

/*
Sample Input
9
10 25 27 1 3 6 7 10 10 
Your Output
3
*/