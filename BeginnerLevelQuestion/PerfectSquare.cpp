//Perfect Square
#include<math.h>
#include<iostream>

using namespace std;

bool isPerfectSquare(int number){
    if(number >= 0){
        long long sr = sqrt(number);
        return (sr * sr == number);
    }
    return false;
}
int main(){
    long long number;
    cout << "Enter a number :" << endl;
    cin >> number;

    if(isPerfectSquare(number)){
        cout << "Perfect Square...." << endl;
    }
    else{
        cout << "Not a Perfect Square...." << endl;
    }

    return 0;
}