// Finding Prime Factors of a number

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void primeFactor(int number)
{
    while (number % 2 == 0)
    {
        cout << 2 << " ";
        number = number / 2;
    }

    for (int i = 3; i <= sqrt(number); i = i + 2)
    {

        while (number % i == 0)
        {
            cout << i << " ";
            number = number / i;
        }
    }
    if (number > 2)
        cout << number << " ";
}
int main()
{
    int number;
    cout << "Enter the number:" << endl;
    cin >> number;

    primeFactor(number);
    return 0;
}