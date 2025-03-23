//Remove spaces from a string


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string removeSpace(string s){
    string ans = "";
    
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] != ' '){
            ans += s[i];
        }
    }
    return ans;
}

int main (){
    string s ;
    getline(cin,s);

    cout << removeSpace(s);

    return 0;
}