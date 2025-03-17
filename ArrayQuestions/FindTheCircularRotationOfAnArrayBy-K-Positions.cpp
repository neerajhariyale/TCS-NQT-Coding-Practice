//Find The Circular Rotation Of An ARRAY by K position

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;



void rotate(int arr[] , int n , int k){
    k = k%n;

    reverse(arr, arr+n);
    reverse(arr , arr+k);
    reverse(arr+k , arr+n);
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    rotate(arr, n ,  k);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << ", "; 
    }


    return 0;
}