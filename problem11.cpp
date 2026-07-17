/*
Write a Program to ask the user to enter a  3 marks and the program print the Average of the 3 marks and check if average >= 50 pass or if less than 50 fail.
*/
#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2};

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter Mark 1" << endl;
    cin >> Mark1;

    cout << "Please enter Mark 2" << endl;
    cin >> Mark2;

    cout << "Please enter Mark 3" << endl;
    cin >> Mark3;
} 

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    int Total = Mark1 + Mark2 + Mark3;

    return Total;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
    if(Average >= 50)
    return enPassFail::Pass;
    else
    return enPassFail::Fail;
}

void PrintResult(float Average)
{
    cout << "the Average of the 3 Marks is : " << Average << endl;
     
    if(CheckAverage(Average) == enPassFail::Pass)
    cout << "You Passed" << endl;
    else
    cout << "You Failed" << endl;
}

int main()
{
int Mark1, Mark2, Mark3;
ReadNumbers(Mark1, Mark2, Mark3);
PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}