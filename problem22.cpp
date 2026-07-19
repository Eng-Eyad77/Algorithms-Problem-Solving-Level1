/*
Write a Program to Calculate Circle Area inscribed in an Isosceles Triangle.
*/
#include <iostream>
using namespace std;
#include <cmath>

void ReadTriangleData(float& A, float& B)
{

    cout << "Please enter Triangle Side A: " << endl;
    cin >> A;

    cout << "Please enter Triangle Side B: " << endl;
    cin >> B;


}

float CalculateCircleAreaByTriangle(float A, float B)
{
    const float pi = 3.141592653589793238;
    float Area = pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}

void PrintResult(float Area)
{
    cout << "Circle Area = " << Area << endl;
}


int main()
{
    float A,B;
    ReadTriangleData(A,B);
    PrintResult(CalculateCircleAreaByTriangle(A,B));

    return 0;
}