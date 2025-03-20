//Calculate frequency of characters in a string

#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<char,int> freq;
    // map<char,int> freq;

    string s = "My Name is Neeraj" ;
    int n  = s.length();

    for(int i = 0 ; i < n ; i++ ){
        if(s[i] != ' '){
            freq[s[i]]++;
        }
    }

    for(auto it: freq){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}