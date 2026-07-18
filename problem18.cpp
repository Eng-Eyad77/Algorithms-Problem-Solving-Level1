/*
Write a Program to Calculate Circle Area.
*/
#include <iostream>
using namespace std;
#include <cmath>

float ReadRadious()
{
    float r;
    cout << "Please enter Radious" << endl;
    cin >> r;

    return r;

}

float CalculateCircleArea(float r)
{
    const float pi = 3.141592653589793238;
    float Area = pi * pow(r,2);
    return Area;
}

void PrintResult(float Area)
{
    cout << "Circle Area = " << Area << endl;
}


int main()
{
    PrintResult(CalculateCircleArea(ReadRadious()));

    return 0;
}