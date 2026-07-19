/*
Write a Program to Calculate Circle Area Along the Circumference.
*/
#include <iostream>
using namespace std;
#include <cmath>

float ReadCircumference()
{
    float L;
    cout << "Please enter Circumference L: " << endl;
    cin >> L;

    return L;

}

float CalculateCircleAreaByCircumference(float L)
{
    const float pi = 3.141592653589793238;
    float Area = pow(L, 2) / (4 * pi);
    return Area;
}

void PrintResult(float Area)
{
    cout << "Circle Area = " << Area << endl;
}


int main()
{
    PrintResult(CalculateCircleAreaByCircumference(ReadCircumference()));

    return 0;
}