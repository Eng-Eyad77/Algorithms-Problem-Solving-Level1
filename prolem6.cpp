/*
Write a Program to ask the user to enter his full name and print it.
*/
#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
};

strInfo ReadInfo()
{
    strInfo Info;
    cout << "Please enter your first name: " << endl;
    cin >> Info.FirstName;

    cout << "Please enter your last name: " << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(strInfo Info , bool Reversed)
{
    string FullName= "";
    if(Reversed)
    FullName = Info.LastName +  " "  +  Info.FirstName;
    else
    FullName = Info.FirstName +  " "  +  Info.LastName;

    return FullName;
}

void PrintFulName(string FullName)
{
    cout << "Your Full Name is: " << FullName << endl;
}


int main()
{

    PrintFulName(GetFullName(ReadInfo(), true)); // true if i want the last name come first in the output

    return 0;

}