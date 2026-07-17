/*
Write a Program to ask the user to enter a 2 numbers and print it after swap these numbers.
*/
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter the first number" << endl;
    cin >> Num1;

    cout << "Please enter the second number" << endl;
    cin >> Num2;

}

void SwapNumbers(int& Num1, int& Num2)
{
    int temp;
    temp = Num1;
    Num1 = Num2;
    Num2 = temp;
}

void PrintNumbers(int Num1, int Num2)
{
    cout << "\nthis is number 1: " << Num1 << endl;

    cout << "this is number 2: " << Num2 << endl;

}



int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1 , Num2);
    SwapNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);
    return 0;
}