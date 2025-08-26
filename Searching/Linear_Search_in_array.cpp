#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,value;
	cin>>n>>value;
	bool found = false;
	for(int i=0; i<n; i++){
	    int num;
	    cin>>num;
	    if(value==num){
	        found=true;
	        break;
	    }
	}
	if(found){
	    cout<<"Yes"<<endl;
	}else{
	    cout<<"No"<<endl;
	}
	return 0;
}

/*
Sample Input
8 1
3 5 1 4 5 6 5 6
Your Output
Yes
*/