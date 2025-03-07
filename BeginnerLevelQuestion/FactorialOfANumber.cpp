//Factorial of a number
#include<iostream>

using namespace std;

int factorial(int number){
    if(number == 0){
        return 1;
    }

    return number * factorial(number - 1);
}


int main(){

    int number;
    cout << "Enter the number :" << endl;
    cin >> number ;

    cout << "Factorial :" << factorial(number) << endl ;


    return 0;
}