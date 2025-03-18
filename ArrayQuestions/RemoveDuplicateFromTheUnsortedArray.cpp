//Remove Duplicate from the unsorted array 

#include<iostream>
#include<unordered_set>
using namespace std;

void unsortedArray(int arr[] , int n){
    unordered_set<int> s;

    for(int i = 0 ; i < n ; i++){
        if(s.find(arr[i]) == s.end()){
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }

}

int main(){
    int arr[] = {4,5,1,2,3,4,6,3,45,45,33,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    unsortedArray(arr,n);
    return 0;
}