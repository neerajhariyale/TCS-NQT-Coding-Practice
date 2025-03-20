//Check if a given string is palindrome or not

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(string s , int n){
    string r = s;
    reverse(r.begin() , r.end());

    if(r == s){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    string s = "namam";
    int n  = s.size();

    cout << checkPallindrome(s,n) << endl;

    return 0;
}