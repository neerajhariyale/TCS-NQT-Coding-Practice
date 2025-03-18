// Find the median of the given array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

double checkMedian(int arr[] , int n){

    sort(arr,arr+n);

    if(n % 2 != 0){
        return arr[n/2];
    }else{
        int m1 = arr[(n/2) -1];
        int m2 = arr[n/2];
        return (m1+m2)/2.0;
    }
}
int main(){
    int arr[] = {2,3,4,5,8,9,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << checkMedian(arr,n) << endl; 
    return 0;
}