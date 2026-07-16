/*
write a program that check if the entred number is odd or even
*/

#include <iostream>
#include <string>
using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
    int Num;
    cout << "Please Enter a Number: " << endl;
    cin >> Num;

    return Num;
}

enNumberType CheckNumberType(int Num)
{
    int result = Num % 2;
    if (result == 0)
    return enNumberType::Even;
    else
    return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
    cout << "Your Number is Even." << endl;
    else
    cout << "Your Number is Odd." <<endl;
}


int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}
