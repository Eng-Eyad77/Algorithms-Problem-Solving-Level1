/*
write a program to read total seconds and calculate it to: 
Days - Hours - Minutes - Seconds.
and print it on screen.
input:
193,535 Seconds
output:
2:5:45:35
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct strTaskDuration
{  
    int NumberOfDays; 
    int NumberOfHours;
    int NumberOfMinutes;
    int NumberOfSeconds;

};

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    

    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;

    int Remainder = 0;
    TaskDuration.NumberOfDays = floor( TotalSeconds / SecondsPerDay); // Remainder = the left after we calculate the days
    Remainder = TotalSeconds % SecondsPerDay;

    TaskDuration.NumberOfHours = floor( Remainder / SecondsPerHour); // Remainder = the left after we calculate the Hours
    Remainder = Remainder % SecondsPerHour;

    TaskDuration.NumberOfMinutes = floor( Remainder / SecondsPerMinute);// Remainder = the left after we calculate the Minutes
    Remainder = Remainder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;


    return TaskDuration;
}


void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << endl;
    cout << TaskDuration.NumberOfDays << ":"
    << TaskDuration.NumberOfHours << ":"
    << TaskDuration.NumberOfMinutes << ":"
    << TaskDuration.NumberOfSeconds << endl;
}

int main()
{
   int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds: ");
    
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}