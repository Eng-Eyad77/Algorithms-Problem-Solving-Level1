/*
Write a Program to ask the user to enter a  3 Numbers and the program print the sum of the 3 numbers.
*/
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter number 1" << endl;
    cin >> Num1;

    cout << "Please enter number 2" << endl;
    cin >> Num2;

    cout << "Please enter number 3" << endl;
    cin >> Num3;
} 

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
    int Total = Num1 + Num2 + Num3;

    return Total;
}

void PrintResult(int Total)
{
    cout << "the total sum of numbers is: " << Total << endl; 
}

int main()
{
int Num1, Num2, Num3;
ReadNumbers(Num1, Num2, Num3);
PrintResult(SumOf3Numbers(Num1, Num2, Num3));

    return 0;
}