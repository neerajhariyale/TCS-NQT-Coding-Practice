//Perfect number
#include<bits/stdc++.h>

using namespace std;

int main(){
    int number ;
    int sum = 0;

    cout << "Enter a number :" << endl;
    cin >> number;

    for(int i = 1 ; i < number ; i++){
        if(number%i == 0){
            sum = sum + i;
        }
    }

    if(sum == number){
        cout << "Perfect Number." << endl;
    }
    else{
        cout << "Not a perfect Number." << endl;
    }
    return 0;
}