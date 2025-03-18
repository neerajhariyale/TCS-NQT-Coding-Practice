//Find the missing number in the array

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int missingNumber(int arr[] , int n){

    int total = (n*(n+1))/2;
    int sum = 0;

    for(int i = 0 ; i < n-1; i++){
        sum = sum + arr[i];
    }

    return total-sum;
}

int main(){
    int arr[] = {1,2,3,4,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << missingNumber(arr , n) << endl;

    return 0;
}