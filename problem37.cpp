/*
write a program to ask the user to enter Numbers and sum them keep reading until the user enter -99
and print the sum.
ex:
10
4
4
2
20
-99
output:
40
*/
#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

float SumNumber()
{
    int Sum = 0, Number = 0, Counter = 1;

    do
    {
        Number = ReadNumber("Please enter Number " + to_string(Counter));
        if(Number == -99)
        {
            break;
        }

        Sum += Number;
        Counter++;
    } while (Number != -99);

    return Sum;
    
}

int main()
{
    float Result = SumNumber();
    cout << "Result = " << Result << endl; 
    return 0;
}