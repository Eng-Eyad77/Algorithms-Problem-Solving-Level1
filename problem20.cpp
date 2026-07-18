/*
Write a Program to Calculate Circle Area inscribed in a square.
*/
#include <iostream>
using namespace std;
#include <cmath>

float ReadSquareSide()
{
    float A;
    cout << "Please enter Square Side A: " << endl;
    cin >> A;

    return A;

}

float CalculateCircleAreaInscribedInSquare(float A)
{
    const float pi = 3.141592653589793238;
    float Area = ( pi * pow(A ,2) ) / 4;
    return Area;
}

void PrintResult(float Area)
{
    cout << "Circle Area = " << Area << endl;
}


int main()
{
    PrintResult(CalculateCircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}