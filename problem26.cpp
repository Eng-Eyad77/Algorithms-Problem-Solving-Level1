/*
write a program to print numbers from 1 to the number the user entred
*/

#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Please Enter a Number" << endl;
    cin >> N;

    return N;
}


void PrintRangeFrom1toN_UsingWhile(int N)
{
    int Counter = 0;
    cout << "Range printed using While Statement" << endl;
    while(Counter < N)
    {
        Counter++;
        cout << Counter << endl;
    }
}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int Counter = 0;
    cout << "Range printed using Do..While Statement" << endl;
    do
    {
        Counter++;
        cout << Counter << endl;
        
    } while (Counter < N);
    
}


void PrintRangeFrom1toN_UsingFor(int N)
{
    cout << "Range printed using For Statement" << endl;
    for(int Counter = 1; Counter <= N; Counter++)
    {
        cout << Counter << endl;
    }
}

int main()
{
    int N = ReadNumber();
    PrintRangeFrom1toN_UsingFor(N);
    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    return 0;
}