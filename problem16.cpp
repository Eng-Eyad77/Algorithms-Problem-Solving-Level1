/*
Write a Program to Calculate Rectangle Area by diagonal & side.
*/
#include <iostream>
using namespace std;
#include <cmath>

void ReadNumbers(float& A, float& D)
{
    cout << "Please enter A" << endl;
    cin >> A;

    cout << "Please enter D" << endl;
    cin >> D;

}

float CalculateRectangleAreaBySideAndDiagonal(float A, float D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A , 2));
    return Area;
}

void PrintResult(float Area)
{
    cout << "this is  Rectangle Area by diagonal side: " << Area << endl;
}


int main()
{
    float A, D;
    ReadNumbers(A,D);
    PrintResult(CalculateRectangleAreaBySideAndDiagonal(A,D));

    return 0;
}