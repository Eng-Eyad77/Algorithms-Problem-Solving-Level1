/*
write a program to ask the user to enter Number1, Number2, Operation Type.
then print the output after you calculate it.
ex:
10
10
+
output:
20
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enOperationType{ Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float ReadNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

enOperationType ReadOpType()
{
    char entreadOpType = '+';

    cout << "Please enter operation type ( + , - , * , / ): " << endl;
    cin >> entreadOpType;

    return (enOperationType)entreadOpType;
}

float Calculate(float Number1, float Number2, enOperationType entreadOpType)
{
    switch (entreadOpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
    // here we don`t use 'break;' statement because the return already get out of the function
}


int main()
{

    float Number1 = ReadNumber("Please Enter the first Number: ");
    float Number2 = ReadNumber("Please Enter the second Number: ");
    enOperationType OpType = ReadOpType();
    cout << "Result = " << Calculate(Number1, Number2, OpType);


    return 0;
}