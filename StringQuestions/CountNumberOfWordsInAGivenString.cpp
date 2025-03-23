//Count number of words in a given string\

#include<bits/stdc++.h>
#include<iostream>


using namespace std;

int countWords(string s){
    int count  = 1;
    int n = s.size();

    for(int i = 0 ; i < n ;i++){
        if(s[i] == ' '){
            count++;
        }
    }

    cout << count ;

}

int main(){

    string s ;
    getline(cin ,s);

    countWords(s);

    return 0;
}
