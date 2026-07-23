/*
write a program to read a total bill and cash paid and calculate the remainder to be paid back.
ex:
20
50
output:
30
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    

    return Number;
}


float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
    float remainder =  TotalCashPaid -  TotalBill;
    return remainder;
}



int main()
{

    float TotalBill = ReadPositiveNumber("Please enter Total Bill: ");
    float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid: ");

    cout << endl;
    cout << "Total Bill: " << TotalBill << endl;
    cout << "Total Cash Paid: " << TotalCashPaid << endl;

    cout << "*****************************************" << endl;

    float Remainder = CalculateRemainder(TotalBill, TotalCashPaid);
    cout << "Remainder: " << Remainder << endl;


    return 0;
}