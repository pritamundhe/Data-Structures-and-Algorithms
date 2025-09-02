#include "bits/stdc++.h"
using namespace std;

int firstoc(vector<int> &arr){
    int l=-1, r =arr.size();
    int result = 0;
    while(r-l>1){
        int mid=l+(r-l)/2;
        if(arr[mid]>=1){
            r = mid;
        }else {
            l = mid;
        }
    }
    return r;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<n-firstoc(arr)<<endl;
    return 0;
}