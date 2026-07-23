/*
write a program to ask the user to enter Numbers and check if the number is prime or not 
prime number : the number can only divide on 1 or on itself.
ex:
5
6
3
output:
Prime
Not Prime
Prime
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2};

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


enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2); // this give me half the number the user enter
    for(int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
        return enPrimeNotPrime::NotPrime;
    }

        return enPrimeNotPrime::Prime;


}


void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimeNotPrime::NotPrime:
        cout << "The Number is Not Prime" << endl;
        break;
    case enPrimeNotPrime::Prime:
        cout << "The Number is Prime" << endl;
        break;
    }
}



int main()
{

    PrintNumberType(ReadPositiveNumber("Please enter a Positive Number: "));
    return 0;
}