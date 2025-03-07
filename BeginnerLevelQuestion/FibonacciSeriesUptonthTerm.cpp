//Fibonacci Series upto nth term

#include<iostream>

using namespace std;

int fibbonacci(int number){
    if(number <= 1){
        return number;
    }
    return fibbonacci(number-1) + fibbonacci(number-2);
}

int main(){
    int number ;
    cout << "Enter the number :" << endl;
    cin >> number ;

    for(int i = 0 ; i < number ; i++){
        cout << fibbonacci(i) << ", ";
    }

    return 0;
}