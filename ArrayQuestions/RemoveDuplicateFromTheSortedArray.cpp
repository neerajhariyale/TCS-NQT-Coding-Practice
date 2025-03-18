//Remove Duplicate from the Sorted Array

#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

void removeDuplicate(int arr[] , int n){
    set<int> s(arr , arr+n);

    for(auto i : s){
        cout << i << " " ;
    }
}

int main(){
    int arr[] = {1,1,2,2,34,55,55,98};
    int n = sizeof(arr)/sizeof(arr[n]);

    removeDuplicate(arr,n);

    return 0;
}