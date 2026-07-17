/*
Write a Program to ask the user to enter a 2 numbers and print the max of two numbers.
*/
#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter the first number" << endl;
    cin >> Num1;

    cout << "Please enter the second number" << endl;
    cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
    if (Num1 > Num2)
    return Num1;
    else
    return Num2;
}

void PrintResult(int Max)
{
    cout << "the max number is: " << Max << endl;
}

int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintResult(MaxOf2Numbers(Num1, Num2));
    return 0;
}