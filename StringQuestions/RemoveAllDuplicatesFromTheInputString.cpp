//Remove all duplicates from the input string.
#include<iostream>
#include<unordered_set>
using namespace std;

string removeDuplicate(string s){
    int n = s.length();
    unordered_set<char> c;
    string result = "";

    for(char ch  : s){
        if(c.find(ch) == c.end()){
            c.insert(ch);
            result += ch;
        }
    }
    return result;
}
int main(){
    string s;
    getline(cin,s);

    cout << removeDuplicate(s);

    return 0;
}