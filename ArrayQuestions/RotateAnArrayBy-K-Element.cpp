//Rotate an array by K element
#include<iostream>
#include<algorithm>

using namespace std;

void rotateArray(int arr[] , int n , int k){
    k = k%n;

    reverse(arr , arr+n);
    reverse(arr , arr+k);
    reverse(arr+n,arr+k);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    rotateArray(arr, n , k);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}