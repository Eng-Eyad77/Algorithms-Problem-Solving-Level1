/*
Write a Program to ask the user to enter a  3 marks and the program print the Average of the 3 marks.
*/
#include <iostream>
using namespace std;

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

void PrintResult(float Average)
{
    cout << "the Average of the 3 Marks is : " << Average << endl; 
}

int main()
{
int Mark1, Mark2, Mark3;
ReadNumbers(Mark1, Mark2, Mark3);
PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}