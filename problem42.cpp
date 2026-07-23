/*
write a program to calculate the task duration in seconds and print it on screen
Days - Hours - Minutes - Seconds.
input:
2
5
45
35
output:
193,535 Seconds
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

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds: ");

    return TaskDuration;
}


int TaskDurationInSeconds(strTaskDuration TaskDuration )
{
    int DurationInSeconds = 0;
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
   int TotalDurationInSeconds = TaskDurationInSeconds(ReadTaskDuration());
    cout << endl;
    cout << "Task Duration In seconds = " << TotalDurationInSeconds ;

    return 0;
}