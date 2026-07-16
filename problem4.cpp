/* 
Write a Program to Ask the User to enter his age and driver license
and print if he is Hired or Rejected.
*/

#include <iostream>
using namespace std;

struct strInfo
{
    int age;
    bool HasDrivingLicense;
};

strInfo ReadInfo()
{
    strInfo Info;

    cout << "Please Enter Your Age: " << endl;
    cin >> Info.age;

    cout << "Do You Have a Driver License? " << endl;
    cin >> Info.HasDrivingLicense;

    return Info;
}

bool IsAccepted(strInfo Info)
{
    return (Info.age > 21 && Info.HasDrivingLicense );
}

void PrintResult(strInfo Info)
{
    if(IsAccepted(Info))
    cout << "Hired" << endl;
    else
    cout << "Rejected" << endl;
}

int main()
{

    PrintResult(ReadInfo());

    return 0;
}