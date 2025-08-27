#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	
	for(int i=0; i<n; i++){
	    int minIndex = i;
	    for(int j=i+1; j<n; j++){
	        if(a[j] < a[minIndex]){
                minIndex = j;
            }
	        
	    }
	    if(minIndex!=i){
	        swap(a[i],a[minIndex]);
	    }
	}
	for(auto &i: a){
	    cout<<i<<" ";
	}
    return 0;
}

/*
Sample Input
4
4 5 2 10

Your Output
2 4 5 10 
*/