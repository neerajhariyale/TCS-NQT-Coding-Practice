// Rearrange the array in the increasing descreasing order:

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void decreasingOrder(int arr[] , int n){
    sort(arr , arr+n);           //sort(arr , arr+n , greater<int>())
    reverse(arr , arr+n);
    cout << "Decreasing Order : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}

void increasingOrder(int arr[] , int n){
    sort(arr , arr+n);
    cout << "Increasing Order : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}

int main(){
    int arr[] = {78,98,458,5,2,75,56};
    int n = sizeof(arr)/sizeof(arr[0]);

    increasingOrder(arr , n) ;
    cout << endl;
    decreasingOrder(arr , n);
    cout << endl;
}