// Write a program to determine if a number is prime
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout << "Enter the Number";
    cin >> number;
    if (number == 1)
    {
        cout << "it is not a prime number";
    }
    else if (number == 2)
    {
        cout << " it is a prime number";
    }
    else
    {
        for (int i = 0; i <= sqrt(number); i++)
        {
            // int count = 0;
            bool isprime = true;
            if (number % i == 0)
            {
                isprime=false;
                break;
            }
            if (isprime)
            {
                cout << "Number is a Prime Number" << number;
            }
            else
            {
                cout << "Number is not a Prime Number" << number;
            }
        }
    }
}