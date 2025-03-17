//Find All Symmetric Pairs in An ARRAY
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<unordered_map>
#include<map>

using namespace std;

int main(){

    int arr[][2] = {{2, 3}, {1, 2}, {3, 2}, {4, 2}, {2, 1}};
    // int arr[][2] = {{10, 20}, {30, 40}, {20, 10}, {40, 50}};
    int n  = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> m;

    for(int i = 0 ; i < n ; i++){
        int first = arr[i][0];
        int second = arr[i][1];

        if(m.find(second) != m.end() && m[second] == first){
            cout << "(" << second << ", " << first << ") and (" << first << ", " << second << ")" << endl;
        }
        else{
            m[first] = second;
        }
    }

    return 0;
}
