/*
write a program to read number of hours and calculate the number of weeks and days.
input:
365
output:
2.17 Weeks
15.20 Days
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    

    return Number;
}

float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}

float HoursToWeek(float NumberOfHours)
{
    return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
    return (float)HoursToDays(NumberOfDays) / 7;
    
}
int main()
{
    float NumberOfHours =  ReadPositiveNumber("Please Enter Number Of Hours: ");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << " Total Number of Hours is: " << NumberOfHours << endl;
    cout << " Total Number of Days is: " << NumberOfDays << endl;
    cout << " Total Number of weeks is: " << HoursToWeek(NumberOfHours) << endl;



    return 0;
}