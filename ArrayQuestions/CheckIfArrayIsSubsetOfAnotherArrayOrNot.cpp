// Check If Array is Subset Of Another Array or Not

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

bool subsetCheck(int arr1[] , int arr2[] , int n ,int m){
    unordered_map<int,int> freq;

    for(int i = 0 ; i < n ; i++){
        freq[arr1[i]]++;
    }

    for(int i = 0 ; i < m ; i++){
        if(freq[arr2[i]] > 0){
            freq[arr2[i]]--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){

    int arr1[] = {3,45,6,55,623,8,9} ;
    int arr2[] = {3,55,6,8,9};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    if(subsetCheck(arr1 , arr2 , n , m)){
        cout << "arr2 is a subset of arr1" << endl;
    }else{
        cout << "arr2 is not a subset of arr1" << endl;
    }

    return 0;
}