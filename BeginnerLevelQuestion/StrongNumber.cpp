//Strong number
#include<bits/stdc++.h>

using namespace std;

int facto(int number){
    int f = 1;

    for(int i = 1 ; i <= number ; i++){
        f = f * i;
    }

    return f;
}

int strongNumber(int number){
    int rem ,sum = 0;
    int copy = number;

    while(number!=0){
        rem = number%10;
        sum = sum + facto(rem);
        number /= 10;
    }

    return sum == copy;
}
int main(){

    int number ;
    cout << "Enter the number : " << endl;
    cin >> number ;

    if(strongNumber(number)){
        cout << "Strong Number.." << endl;
    }
    else{
        cout << "Not a strong number...." << endl;
    }
    return 0;
}