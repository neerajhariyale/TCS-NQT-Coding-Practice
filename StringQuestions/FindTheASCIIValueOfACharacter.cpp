//Find the ASCII value of a character

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int charAscii(char c){
    return int(c);
}

int main(){
    char c;

    cout << "Enter char:";
    cin >> c;

    cout << charAscii(c);
    return 0;
}