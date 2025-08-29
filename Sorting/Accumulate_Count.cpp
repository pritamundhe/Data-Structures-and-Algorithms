#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n;
	vector<int> arr(n);
	for(auto &i: arr){
	    cin>>i;
	}
	cin>>k;
	vector<int> a(k);
	for(int &c: a){
	    c=0;
	}
	for(int i=0; i<n; i++){
	    a[arr[i]] = a[arr[i]]+1;
	}
	for(int i=1; i<k; i++){
	    a[i]=a[i]+a[i-1];
	}
	for(auto &i: a){
	    cout<<i<<" ";
	}
}


/*
Sample Input
6
2 0 2 1 1 0
3

Your Output
2 4 6 
*/