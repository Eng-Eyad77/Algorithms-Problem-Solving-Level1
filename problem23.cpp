/*
Write a Program to Calculate Circle Area Described Around an Arbitrary Triangle.
*/
#include <iostream>
using namespace std;
#include <cmath>

void ReadTriangleData(float& A, float& B, float& C)
{

    cout << "Please enter Triangle Side A: " << endl;
    cin >> A;

    cout << "Please enter Triangle Side B: " << endl;
    cin >> B;

    cout << "Please enter Triangle Side C: " << endl;
    cin >> C;


}

float CalculateCircleAreaByTriangle(float A, float B, float C)
{
    const float pi = 3.141592653589793238;
    float P = (A + B + C) / 2;
    float T;
    T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    float Area = pi * pow( T , 2);
    return Area;
}

void PrintResult(float Area)
{
    cout << "Circle Area = " << Area << endl;
}


int main()
{
    float A,B,C;
    ReadTriangleData(A,B,C);
    PrintResult(CalculateCircleAreaByTriangle(A,B,C));

    return 0;
}