//Power of a number

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int number,p ;
    cout << "Enter a number: " << endl;
    cin >> number ;

    cout << "Enter the power of a number : " << endl;
    cin >> p;

    cout << pow(number , p) << endl;
    return 0;
}