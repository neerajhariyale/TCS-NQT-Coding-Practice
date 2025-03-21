//Count number of vowels, consonants, spaces in String
#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s  = "Neeraj is a boy and an engineer";
    int n = s.size();
    unordered_map<string,int> freq;
    freq["vowels"] = 0;
    freq["consonants"] = 0;
    freq["space"] = 0;

    for(int i = 0 ; i < n ; i++){
        if(s[i] == ' '){
            freq["space"]++;
        }
        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
        s[i] == 'o' ||  s[i] == 'u' ||  s[i] == 'A' ||  s[i] == 'E' ||  s[i] == 'I' || s[i] == 'O' || s[i] == 'U'  ){
            freq["vowels"]++;
        }
        else{
            freq["consonants"]++;
        }
    }

    for(auto i : freq){
        cout << i.first << "->" << i.second << endl;
    }
    return 0;
}