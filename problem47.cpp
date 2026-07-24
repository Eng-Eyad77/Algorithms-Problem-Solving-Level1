/*
write a program to read Loan Amount and Monthly Payment and calculate how many months to close the loan.
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


float MonthsToCloseLoan(float entreadLoan , float entreadPayment)
{
    return (float)entreadLoan / entreadPayment;
}

void PrintResult(float Months)
{
    cout << Months << " Months" << endl;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter the Loan Amount: ");
    float MonthlyPayment = ReadPositiveNumber("Please enter the Monthly Payment: ");
    PrintResult(MonthsToCloseLoan(LoanAmount, MonthlyPayment));
    return 0;
}