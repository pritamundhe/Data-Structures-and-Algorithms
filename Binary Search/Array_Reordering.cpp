#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        vector<int> B(n);
        for(int &i: A){
            cin>>i;
        }
        for(int &j: B){
            cin>>j;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(A[i]>A[j]){
                    swap(A[i],A[j]);
                }
                if(B[i]<B[j]){
                    swap(B[i],B[j]);
                }
            }
        }
        for(int i: A){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int j: B){
            cout<<j<<" ";
        }
    }
    return 0;
}


/*
array A and B 
first should be sorted in descending order
second should be sorted in ascending order

find the way to sort both in single block
lets do some comparision with both cases


*/