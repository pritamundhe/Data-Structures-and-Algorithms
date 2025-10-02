#include <bits/stdc++.h>
using namespace std;

int maxsum(vector<int> &arr, int k){

    int n = arr.size();
    int sum = 0, res = INT_MIN;
    
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    res = sum;
    for (int i =k; i<arr.size(); i++) {
        sum +=arr[i]-arr[i-k];  
        res = max(res,sum);
    }
    return res;
}

int main() {
	// your code goes here
	int n, k;
	cin>>n>>k;
	
	vector<int> arr(n);
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	cout<<maxsum(arr,k)<<endl;
    return 0;
}
