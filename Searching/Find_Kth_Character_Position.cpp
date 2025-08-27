#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin>>s;
    char c;
    cin>>c;
    int k;
    cin>>k;
    int count = 0;
    int index = -1;
    for(int i=0; i<s.length(); i++){
        if(s[i]==c){
            count+=1;
        }
        if(count==k){
           index = i;
           break;
        } 
    }
    cout<<index<<endl;
    return 0;
}

/*
Sample Input
HelloHowyoudoing H 2

Your Output
5
*/