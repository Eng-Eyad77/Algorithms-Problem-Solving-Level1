/*
Write a Program to Calculate Triangle Area.
*/
#include <iostream>
using namespace std;
#include <cmath>

void ReadNumbers(float& A, float& H)
{
    cout << "Please enter A" << endl;
    cin >> A;

    cout << "Please enter H" << endl;
    cin >> H;

}

float CalculateTriangleArea(float A, float H)
{
    float Area = (A/2) * H;
    return Area;
}

void PrintResult(float Area)
{
    cout << "this is the Area of Triangle: " << Area << endl;
}


int main()
{
    float A, H;
    ReadNumbers(A,H);
    PrintResult(CalculateTriangleArea(A,H));

    return 0;
}