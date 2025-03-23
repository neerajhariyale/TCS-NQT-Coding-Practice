//Remove brackets from an algebraic expression
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

string removeBracket(string s){
    string ans = "";

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] != '(' && s[i] != ')'){
            ans += s[i];
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin , s);

    cout << removeBracket(s);

    return 0;
}