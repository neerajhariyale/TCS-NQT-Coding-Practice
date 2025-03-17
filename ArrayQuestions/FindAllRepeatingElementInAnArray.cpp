// Find All repeating element in the array
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,int> freq;
    int arr[]= {1,1,2,5,4,7,8,9,8,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < n ; i++){
        freq[arr[i]]++;
    }

    for(auto it : freq){
        if(it.second > 1){
            cout << it.first << ", " ;
        }
    }



    return 0;
}