//Find all non repeating elements in an array

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main(){

    int arr[] = {2,2,7,8,9,4,5,6,89,7,4,1, 8 ,9 ,5 ,6,89 ,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int ,int> freq;
    bool found = false;

    for(int i = 0 ; i < n ; i++){
        freq[arr[i]]++;
    }

    for(int i = 0 ; i < n ; i++){
        if(freq[arr[i]] == 1){
            cout << arr[i] << ", " ;
            found = true;
        }
    }

    if(!found){
        cout << -1;
    }


    return 0;
}