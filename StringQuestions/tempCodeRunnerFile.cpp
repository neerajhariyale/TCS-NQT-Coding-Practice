//Check if a given string is palindrome or not

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(string s , int n){
    string r = reverse(s , s+n);
    if(r == s){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    string s = "naman";
    int n  = s.size();

    checkPallindrome(s,n);

    return 0;
}