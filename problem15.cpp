/*
Write a Program to Calculate Rectangle Area.
*/
#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << "Please enter the first number" << endl;
    cin >> A;

    cout << "Please enter the second number" << endl;
    cin >> B;

}

float CalculateRectangleArea(float A, float B)
{
    float Area = A * B;
    return Area;
}

void PrintResult(float Area)
{
    cout << "this is  Rectangle Area: " << Area << endl;
}


int main()
{
    float A, B;
    ReadNumbers(A,B);
    PrintResult(CalculateRectangleArea(A,B));

    return 0;
}