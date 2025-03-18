//Reverse Given Array
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int arr[] = {3,4,56,7,89,90,23};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, arr+n);

    cout << "REVERSE :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}