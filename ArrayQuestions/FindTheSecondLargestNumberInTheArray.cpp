// Find the second largest number in the array

#include<iostream>
#include<string.h>
#include <climits>
using namespace std;

int secondLargest(int arr[] , int n){
    if(n < 2){
        return -1;
    }

    int l = INT_MIN;
    int s = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > l){
            s = l;
            l = arr[i];
        }
        else if(arr[i] > s && arr[i] != l){
            s = arr[i];
        }
    }

    if(s == INT_MIN){
        return -1;
    }
    return s;
    
}

int main(){

    int arr[] = {8,7,9,14,6,77,75,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << secondLargest(arr,n);


    return 0;
}