//Remove characters from first string present in the second string

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

string removeChar(string s1 , string s2){
    unordered_set<char> s;
    string ans = "";

    for(char ch : s2){
        s.insert(ch);
    }

    for(char ch : s1){
        if(s.find(ch) == s.end()){
            ans += ch;
        }
    }
    return ans;
}

int main(){
    
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);

    cout << removeChar(s1,s2);
    return 0;
}