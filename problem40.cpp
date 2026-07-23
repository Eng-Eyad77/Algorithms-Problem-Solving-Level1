/*
write a program to read bill value and add service fee and sales tax to it, and print the total bill on the screen.
"sales tax will be add after service fee is add to the bill value".
service fee = 10%
sales tax = 16%
input:
100
output:
127.6
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

float TotalBillAfterServiceAndTax(float BillValue)
{
    float TotalBillValue = 0;
    float ServiceFee = 1.10;
    float SalesTax = 1.16;

    TotalBillValue = BillValue * ServiceFee;
    TotalBillValue = TotalBillValue * SalesTax;

    return TotalBillValue;
}



int main()
{
    float BillValue = ReadPositiveNumber("Please enter the Bill Value: ");
    float TotalBillValue = TotalBillAfterServiceAndTax(BillValue);
    
    cout << endl;
    cout << "Bill Value: " << BillValue << endl;
    cout << "Bill Value After Service fee And Sales Tax = " << TotalBillValue << endl;

    

}