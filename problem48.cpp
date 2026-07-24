/*
write a program to read Loan Amount and months and calculate how mach Monthly Payment to close the loan.
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    

    return Number;
}


float MonthlyPaymentToCloseLoan(float entreadLoan , float entreadMonths)
{
    return (float)entreadLoan / entreadMonths;
}

void PrintResult(float MonthlyPayment)
{
    cout << "Monthly Payment " << MonthlyPayment << endl;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter the Loan Amount: ");
    float HowManyMonths = ReadPositiveNumber("Please enter the how many months you want: ");
    PrintResult(MonthlyPaymentToCloseLoan(LoanAmount, HowManyMonths));
    return 0;
}