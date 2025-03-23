//Remove characters from a string except alphabets
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string removeSpecialChar(string s){
    string ans = "";
    for(int i = 0 ; i < s.length() ; i++){
        if((s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= 'a' && s[i] <= 'z') ){
            ans += s[i];
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);

    cout << removeSpecialChar(s);
    return 0;
}