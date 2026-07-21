/*
write a program to ask the user to enter a his grade and print the beast char for the grade
ex:
95 = A 
70 = C
49 and less = F.
*/

#include <iostream>
#include <string>
using namespace std;

int ReadNumberInRange(int From , int To)
{
    int Grade;

    do
    {
        cout << "Please Enter Your Grade between 0 and 100: " << endl;
        cin >> Grade;
    } while (Grade < From || Grade > To );
    
    return Grade;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
    return 'A';
    else if (Grade >= 80)
    return 'B';
    else if(Grade >= 70)
    return 'C';
    else if (Grade >= 60)
    return 'D';
    else if(Grade >= 50)
    return 'E';
    else
    return 'F';   
}

int main()
{
    int Number = ReadNumberInRange(0 ,100);
    cout << endl<< "Result = " << GetGradeLetter(Number);
    return 0;
}