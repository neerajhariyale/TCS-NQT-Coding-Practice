//Change case of each character in a string
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void changeCase(string s , int n){
    
    for(int  i = 0 ; i < n ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = tolower(s[i]);
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
}

int main(){
    string s = "My Name Is nEErAj";
    int n = s.size();

    changeCase(s , n);

    return 0;
}