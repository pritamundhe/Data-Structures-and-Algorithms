#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	vector<int> nge(n,-1);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[j] > a[i]) {
                    nge[i] = a[j];
                break;
            }
        }
    }
	for(auto &i: nge){
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