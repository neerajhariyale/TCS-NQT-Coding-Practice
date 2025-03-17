//Add The Element In The Array 

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4,7,8,10,78,98};

    int newNumber = 78;

    arr.push_back(newNumber);

    for(auto it : arr){
        cout << it << " ";
    }
    return 0;
}