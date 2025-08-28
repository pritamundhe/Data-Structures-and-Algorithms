#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a1(n);
	for(int i=0; i<n; i++){
	    cin>>a1[i];
	}
	int m;
	cin>>m;
	vector<int> a2(m);
	for(int i=0; i<m; i++){
	    cin>>a2[i];
	}
	vector<int> merge(n+m);
	int i=0, l=0, r=0;
	
	while(l<n && r<m){
	    if(a1[l]<a2[r]){
	        merge[i]=a1[l];
	        i++;
	        l++;
	    }else{
	        merge[i]=a2[r];
	        i++;
	        r++;
	    }
	}
	while(l<n){
	    merge[i]=a1[l];
	    i++;
	    l++;
	}
	while(r<m){
	    merge[i]=a2[r];
	    i++;
	    r++;
	}
	
	for(auto &i: merge){
	    cout<<i<<" ";
	}
}

/*
Sample Input
3
1 3 5
3
2 4 6

Your Output
1 2 3 4 5 6 
*/