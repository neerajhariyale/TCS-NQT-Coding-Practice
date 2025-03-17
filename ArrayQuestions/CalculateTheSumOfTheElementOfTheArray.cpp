// Calculate the sum of the element of the array

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {4,7,8,9,1,78,999,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }

    cout << "Sum :" << sum << endl;
    
    return 0;
}