/*
write a program to read a number from the user and transform the number to a day of a week.
and print it on screen.
input:
1
output:
Sunday
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enDaysOfWeek{ Sunday = 1, Monday = 2, Tuseday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};



int ReadNumberInRange(string Message, int From , int To)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To );
    
    return Number;
}

enDaysOfWeek ReadDayOfWeek()
{
    return (enDaysOfWeek)ReadNumberInRange("Please Enter a Day Number Sunday = 1, Monday = 2, Tuseday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7", 1 , 7 );
}

string GetDayWeek(enDaysOfWeek Day)
{
    switch (Day)
    {
    case enDaysOfWeek::Sunday:
        return "Sunday";
        case enDaysOfWeek::Monday:
        return "Monday";
        case enDaysOfWeek::Tuseday:
        return "Tuseday";
        case enDaysOfWeek::Wednesday:
        return "Wednesday";
        case enDaysOfWeek::Thursday:
        return "Thursday";
        case enDaysOfWeek::Friday:
        return "Friday";
        case enDaysOfWeek::Saturday:
        return "Saturday";
        
        default:
        return "Not a Valid Day";
    }
}

int main()
{    
   cout << GetDayWeek(ReadDayOfWeek())<< endl;

    return 0;

}