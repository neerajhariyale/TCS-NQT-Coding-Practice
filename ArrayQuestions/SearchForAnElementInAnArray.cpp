//search for an element in an array

#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int arr[] = {2,3,9,7,5,4,1,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 4;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            cout << "Found at : " << i+1 << " index." << endl;
        }
    }
    return 0;
}