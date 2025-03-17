//Calculate the Frequency of the each Element in the array

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<map>

using namespace std;

int main(){

    int arr[] = { 1,2,34,5,7,8,9,4,1,2,3,34,5,7,8,9,1,1,2,2,34,3,3,8};
    int n =  sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    unordered_map<int,int> freq;


    for(int i = 0 ; i < n ; i++){
        freq[arr[i]]++;
    }

    cout << "Frrequency :" << endl ;

    for(auto it : freq){

        cout << it.first << " : " <<  it.second << endl;
    }
    
    
   
    return 0;
}
