/*
Write a Program to ask the user to enter a number and print on the scren half the number 
ex:
user enter: 10
output: 5
*/
#include <iostream>
using namespace std;

int ReadNumber()
{
    int entredNumber;
    cout << "Please enter a number: " <<endl;
    cin >> entredNumber;

    return entredNumber;

}

float CalculateHalfNumber(int Num)
{
    return (float) Num / 2;
}

void PrintResult(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << Result << endl; 
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}