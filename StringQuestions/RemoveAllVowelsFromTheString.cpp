//Remove all vowels from the string

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string removeVowel(string s){
    string ans = "" ;
    int n = s.length();

    for(int i = 0 ; i < n ; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && 
           s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'){
            ans += s[i];
           }
    }

    return ans;
}

int main(){

    string s;
    getline(cin,s);

    cout << removeVowel(s);

    return 0;
}