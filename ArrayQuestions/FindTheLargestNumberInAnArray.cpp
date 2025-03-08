//Find the Largest Number in the given Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {88,99,1000,54,6,5002,78,20,63,41,012,21,-2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << arr[n-1] << endl;

    return 0;
}