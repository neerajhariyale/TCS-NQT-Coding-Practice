//Find Non-repeating characters of a String

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

void nonRepeatingCharacter(string s){
    unordered_map<char,int> freq;

    for(int i = 0 ; i < s.length() ; i++){
        freq[s[i]]++;
    }

    for(int i = 0 ; i < s.length() ; i++){
        if(freq[s[i]] == 1){
            cout << s[i] << " ";
        }
    }
}

int main(){

    string s;
    getline(cin,s);

    nonRepeatingCharacter(s);

    return 0;
}