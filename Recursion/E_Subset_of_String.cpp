#include <bits/stdc++.h>
using namespace std;

void solve(string &in, string &op){
    if(in.length()==0){
        cout<<op<<" ";
        return;
    }
    
    string op1 = op;
    string op2 = op;
    
    op2.push_back(in[0]);
    char ch = in[0];
    in.erase(in.begin()+0);
    solve(in,op1);
    solve(in,op2);
    in.insert(in.begin(),ch);
}

int main() {
	// your code goes here
    string in = "abcd";
    string op = "";
    solve(in,op);
    return 0;
}

/*
Output:

 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 

*/
