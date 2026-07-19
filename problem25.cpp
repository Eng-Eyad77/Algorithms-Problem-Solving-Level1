/*
write a program to ask the user to enter an age,
if age between 18 and 45 print "Valid Age", 
otherwise let him try again.
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


int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;

    do
    {
        Age = ReadAge();

    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
    
}

void PrintResult(int Age)
{
   cout << "Your Age is: " << Age << endl;
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18,45));

    return 0;
}
