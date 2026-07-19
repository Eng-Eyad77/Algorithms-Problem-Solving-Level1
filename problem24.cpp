/*
write a program to ask the user to enter an age,
if age between 18 and 45 print "Valid Age", 
otherwise print "Invalid Age".
*/

#include <iostream>
#include <string>
using namespace std;

int ReadAge()
{
    int age;
    cout << "Please enter your Age: " << endl;
    cin >> age;

    return age;
}

bool ValidateNumberInRange(int Number, int From, int To) // this is a general method to catch a number in a range
{
    return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18 , 45))
    cout << Age << " Is a Valid Age" << endl;
    else
    cout << Age << " Is an Invalid Age" << endl;
}

int main()
{
    PrintResult(ReadAge());

    return 0;
}
