#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int addNumbers(int a, int b){
    return a+b;
}

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // Prints sum
    cout << firstNumber << " + " <<  secondNumber << " = " << addNumbers(firstNumber, secondNumber);

    return 0;
}
