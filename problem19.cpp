/*
Write a Program to Calculate Circle Area through diameter.
*/
#include <iostream>
using namespace std;
#include <cmath>

float ReadDiameter()
{
    float D;
    cout << "Please enter Diameter" << endl;
    cin >> D;

    return D;

}

float CalculateCircleAreaByDiameter(float D)
{
    const float pi = 3.141592653589793238;
    float Area = (pi * pow(D,2)) / 4;
    return Area;
}

void PrintResult(float Area)
{
    cout << "Circle Area through Diameter = " << Area << endl;
}


int main()
{
    PrintResult(CalculateCircleAreaByDiameter(ReadDiameter()));

    return 0;
}