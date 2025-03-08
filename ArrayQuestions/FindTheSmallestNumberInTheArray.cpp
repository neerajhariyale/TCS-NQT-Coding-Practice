//Find the smallest number in the array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[] = { 78,98,74,2,1,3,5,6,7,9,10,-1};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr , arr+n);
    
    cout << arr[0] << endl;
    return 0;
}