/*
write a program to ask the user to enter total seals and you calculate the percentage:
1,000,000 = 1%
500k to 1M = 2%
100k to 500k = 3%
50k to 100k = 5%
otherwise = 0%
*/

#include <iostream>
#include <string>
using namespace std;

int ReadTotalSeals()
{
    int entreadTotalSeals;

    
        cout << "Please Enter Your Total Seals: " << endl;
        cin >> entreadTotalSeals;
   
    return entreadTotalSeals;
}

float GetCommissionPercentage(float entreadTotalSeals)
{
    if( entreadTotalSeals >= 1000000)
    return 0.01;
    else if( entreadTotalSeals >= 500000)
    return 0.02;
    else if( entreadTotalSeals >= 100000)
    return 0.03;
    else if(entreadTotalSeals >= 50000)
    return 0.05;
    else
    return 0.00;

}

float CalculateTotalCommission(float entreadTotalSeals)
{
    return GetCommissionPercentage(entreadTotalSeals) * entreadTotalSeals;
}

int main()
{

    float TotalSeals = ReadTotalSeals();

    cout << endl << " Commission Percentage "  << GetCommissionPercentage(TotalSeals);
    cout << endl << " TotalCommission " << CalculateTotalCommission(TotalSeals);

    return 0;

}