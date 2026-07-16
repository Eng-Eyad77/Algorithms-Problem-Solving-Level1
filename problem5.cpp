/* 
Write a Program to Ask the User to enter his age and driver license and if he has a Recommendation 
and print if he is Hired or Rejected.
*/

#include <iostream>
using namespace std;

struct strInfo
{
    int age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

strInfo ReadInfo()
{
    strInfo Info;

    cout << "Please Enter Your Age: " << endl;
    cin >> Info.age;

    cout << "Do You Have a Driver License? " << endl;
    cin >> Info.HasDrivingLicense;

    cout << "Do You Have a Recommendation? " << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(strInfo Info)
{
    if (Info.HasRecommendation)  //Info.HasRecommendation == true ?
    {
        return true;
    }
    else
    {
        return (Info.age > 21 && Info.HasDrivingLicense );
    }
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