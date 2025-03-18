//Find The Second Smallest number in an array
#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int secondSmallest(int arr[] , int n){
    if(n < 2){
        return -1;
    }
    
    int s = INT_MAX;
    int xs = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < s){
            xs = s;
            s = arr[i];
        }
        else if(arr[i] < xs && arr[i]!= s){
            xs = arr[i];
        }
    }
    return xs;
}

int main(){

    int arr[] = {10,8,9,78,10,78};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << secondSmallest(arr , n) << endl;
    return 0;
}