#include <bits/stdc++.h>
using namespace std;

long long findMinSumSubarray(int n, int k, vector<int>& arr) {
    // Write your code here
    long long sum = 0;
    
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }
    
    long long mn = sum;
    int l=0, r=k;
    
    while(r<n){
        sum+=arr[r]-arr[l];
        r++;
        l++;
        mn = min(mn,sum);
    }
    return mn;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMinSumSubarray(n, k, arr) << endl;
    return 0;
}