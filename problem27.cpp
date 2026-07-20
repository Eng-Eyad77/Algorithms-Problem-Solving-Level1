/*
write a program to print numbers from the number the user entred "N" to 1
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


void PrintRangeFromNto1_UsingWhile(int N)
{
    int Counter = N + 1; // made it like this not counter = N so i can remove the = in the condition
    cout << "Range printed using While Statement" << endl;
    while(Counter > 1)
    {
        Counter--;
        cout << Counter << endl;
    }
}

void PrintRangeFromNto1_UsingDoWhile(int N)
{
    int Counter = N + 1; // made it like this not counter = N so i can remove the = in the condition
    cout << "Range printed using Do..While Statement" << endl;
    do
    {
        Counter--;
        cout << Counter << endl;
        
    } while (Counter > 1);
    
}


void PrintRangeFromNto1_UsingFor(int N)
{
    cout << "Range printed using For Statement" << endl;
    for(int Counter = N; Counter >= 1; Counter--)
    {
        cout << Counter << endl;
    }
}

int main()
{
    int N = ReadNumber();
    PrintRangeFromNto1_UsingFor(N);
    PrintRangeFromNto1_UsingWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    return 0;
}