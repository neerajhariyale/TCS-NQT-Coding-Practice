//Find Majority Element in the array

#include<iostream>
using namespace std;

int majorityElement(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 2 , 3 , 4 , 1 , 1 , 1 , 1,3,3,3,3,3,3,3,3,3, 3 ,3 ,3 ,3 ,3 ,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << majorityElement(arr, n) << endl;
    return 0;
}