#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    bool found = false;
    int a, b;
    int pairs[n][2];
    for(int i=0; i<n; i++){
        cin>>pairs[i][0]>>pairs[i][1];
    }
    int x, y;
    cin >> x >> y;
    for(int i=0; i<n; i++){
        a = pairs[i][0];
        b = pairs[i][1];
        if((a==x && b==y) || (a==y && b==x)){
            found= true;
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
4
2 3
4 5
3 5
1 7
5 3

Your Output
Yes
*/