#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the Number" << endl;
    cin >> number;
    if (number % 2 == 0){
        cout << "Your Number is Even Number : " << number;
    }
    else{
        cout << "Your Number is Odd Number : " << number;
    }
    return 0;
}

