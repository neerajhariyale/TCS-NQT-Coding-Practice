//Check if two strings are anagram of each other

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkAnagram(string s1 , string s2){
    if(s1.length() != s2.length()){
        return false;
    }

    sort(s1.begin() , s1.end());
    sort(s2.begin() , s2.end());

    for(int i = 0 ; i < s1.length() ; i++){
        if(s1[i] != s2[i]){
            return false;
        }
    }

    return true;
}

int main(){
    string s1 = "radhe";
    string s2 = "adhrE";

    if(checkAnagram(s1,s2)){
        cout << "Anagram";
    }else{
        cout <<"Not anagram";
    }

    
    



    return 0;
}