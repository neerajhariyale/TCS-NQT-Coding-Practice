//Capitalize first and last character of each word
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "neeraj is bad boy";
    int n = s.size();
    string upperString = s;

    for(int i = 0 ; i < n ; i++){
        if(i == 0 || i == (n - 1) && (int) s[i] >= 97 ){
            upperString[i] = ((char)((int)s[i] - 32));
        }
        else if(s[i] == ' '){
            if(((int) s[i - 1] - 32) >= 65){
                upperString[i-1] = ((char)((int)s[i-1] - 32));
            }
            if (((int) s[i + 1] - 32) >= 65){
                upperString[i+1] = ((char)((int)s[i+1] - 32));
            }
        }
    }

    cout << upperString ;
    return 0;
}