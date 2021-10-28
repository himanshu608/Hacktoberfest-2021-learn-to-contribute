#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int addNumbers(int num1, int num2){
    return num1+num2;
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
