#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int index = -1;
    for(int i=0; i<s.length(); i++){
        if(s[i]==c){
            index = i;
            break;
        }
    }
    cout<<index<<endl;
    return 0;
}

/*
Sample Input
HelloHowYouDoing
w

Your Output
7
*/