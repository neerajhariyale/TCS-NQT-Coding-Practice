// Search the element in an array

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[] , int left , int right , int key){
    while(left<=right){
        int mid = left +(right-left)/2;


        if(arr[mid] == key){
            return 1;
        }
        else if(arr[mid] < key){
            left = mid + 1; 
        }
        else{
            right = mid -1;
        }
    }
    return 0;
}
int main(){
    int arr[] = {4,8,10,45,6,78};
    int key = 10;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    // LINEAR SEARCH
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] == key){
    //         count++;
    //     }
    // }



    //BINARAY SEARCH
    count = binarySearch(arr , 0 , n-1 , key);

    if(count == 1){
        cout << "Presnt in the array." << endl;
    }else{
        cout << "Not present in the array." << endl;
    }

    return 0;
}