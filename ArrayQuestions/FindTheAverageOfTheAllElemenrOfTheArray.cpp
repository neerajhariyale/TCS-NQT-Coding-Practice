//Find The Average Of the All The ELEMENT OF THE ARRAY

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {4,5,6,7,8,1,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int avg = 0;
    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }

    cout << (float)sum / n;
    return 0;
}