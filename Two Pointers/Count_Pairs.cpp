#include <bits/stdc++.h>
using namespace std;

long long countPairsLessThanX(vector<int>& arr, int x) {
    int l=0, r=arr.size()-1;
    long long count = 0;
    while(l<r){
        if(arr[l]+arr[r]<x){
            count +=(r-l);
            l++;
        }else{
            r--;
        }
    }
    return count;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << countPairsLessThanX(arr, x) << endl;
    return 0;
}

/*
Sample Input
5
1 2 3 4 5
7
Your Output
6
*/