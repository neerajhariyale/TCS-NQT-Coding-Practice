//Return maximum occurring character in the input string

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char maxChar(string s){
    unordered_map<char,int> freq;

    for(int i = 0 ; i < s.length() ; i++){
        freq[s[i]]++;
    }

    int count = 0;
    char ans ;

    for(auto ch : freq){
        if(ch.second > count){
            count = ch.second;
            ans = ch.first;
        }
    }

    return ans;
}
int main(){
    string s;
    getline(cin,s);

    cout << maxChar(s);
    return 0;
}