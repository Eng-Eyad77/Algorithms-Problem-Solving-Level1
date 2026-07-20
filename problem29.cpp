/*
write a program to ask the user to enter a number and sum the Even numbers from 1 to user number
*/

#include <iostream>
using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

int ReadNumber()
{
    int N;
    cout << "Please Enter a Number" << endl;
    cin >> N;

    return N;
}

enOddOrEven CheckOddOrEven(int Number)
{
    if( Number % 2 != 0 )
    return enOddOrEven::Odd;
    else
    return enOddOrEven::Even;
}

int SumEvenNumbersFrom1toN_UsingWhile(int N)
{
    int counter = 0;
    int sum = 0;

    cout << "Sum Even Numbers using While Statement" << endl;

    while(counter < N)
    {
        counter++;
        if(CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            sum += counter;
        }
    }

    return sum;
}

int SumEvenNumbersFrom1toN_UsingDoWhile(int N)
{
    int counter = 0;
    int sum = 0;

    cout << "Sum Even Numbers using Do..While Statement" << endl;

    do
    {
        counter++;
        if(CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            sum += counter;
        }
    } while (counter < N);
    
    return sum;
}

int SumEvenNumbersFrom1toN_UsingFor(int N)
{
    int sum = 0;
    cout << "Sum Even Numbers using For Statement" << endl;

    for(int counter = 1; counter <= N; counter++)
    {
        if(CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            sum += counter;
        }
    }

    return sum;
}

int main()
{

    int N = ReadNumber();

    cout << SumEvenNumbersFrom1toN_UsingWhile(N) << endl;

    cout << SumEvenNumbersFrom1toN_UsingDoWhile(N) << endl;

    cout << SumEvenNumbersFrom1toN_UsingFor(N) << endl;


    return 0;
}