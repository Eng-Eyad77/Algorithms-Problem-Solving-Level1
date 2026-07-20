/*
write a program to ask the user to enter a number and 
print the Factorial of the entread number
*/

#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    

    return Number;
}

int Factorial(int N)
{
    int F = 1;
    for(int Counter = N; Counter >= 1; Counter--)
    {
        F = F * Counter;
    }

    return F;
}


int main()
{
   
cout << Factorial(ReadPositiveNumber("Please Enter a Positive Number: "));

    return 0;
}