/*
write a program to ask the user to enter a number and enter the power he want so i print the number with the power he entread.
*/

#include <iostream>
#include <cmath>
using namespace std;


int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number" << endl;
    cin >> Number;

    return Number;
}

int ReadPower()
{
    int entreadPower;
    cout << "Please Enter a Power" << endl;
    cin >> entreadPower;

    return entreadPower;
}

int PowerOfM(int Number, int entreadPower)
{
    if( entreadPower == 0)
    {
        // any number power to 0 = 1
        return 1;
    }

    int Power = 1;
    for(int i= 1; i <= entreadPower; i++)
    {
        Power = Power * Number;
    }

    return Power;
}


int main()
{

    int Number = ReadNumber();
    int Power = ReadPower();
   cout << "Result = " << PowerOfM(Number, Power) << endl;

    return 0;
}