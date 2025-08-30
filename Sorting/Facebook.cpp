#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> likes(n);
        vector<int> comments(n);
        for(int i=0; i<n; i++){
            cin>>likes[i];
        }
        for(int i=0; i<n; i++){
            cin>>comments[i];
        }
        int like = likes[0];
        int comment = comments[0];
        int index = 0;
        for(int i=1; i<n; i++){
            if(likes[i]>like || likes[i]==like && comments[i]>comment){
                like= likes[i];
                comment = comments[i];
                index = i;
            }
        }
        cout<<index+1<<endl;
    }
}

/*
Sample Input
4
3
5 4 4
1 2 3
3
10 10 9
2 5 4
3
3 3 9
9 1 3
4
2 8 1 5
2 8 1 9

Your Output
1
2
3
2
*/