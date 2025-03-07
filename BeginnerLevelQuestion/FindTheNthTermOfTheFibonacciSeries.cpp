//Find the Nth Term of the Fibonacci Series :
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

   cout << fibbonacci(number) << endl ;

    return 0;
}