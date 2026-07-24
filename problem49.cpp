/*
write a program to read pin code from the user then check if the pin = 1234 show him the balance 7500.
otherwise print "Wrong PIN"
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;
}

bool CheckPinCode()
{
    string PinCode;
    do
    {
         PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1; // this will return true
        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4F"); // turn screen red
        }

    } while (PinCode != "1234");

    return 0; // when you reach this means check pin code is failed.
}

int main()
{
    if (CheckPinCode())
    {
        system("color 2F"); // this turn screen to green.
        cout << "\nYour Balance is: "<< 7500 << endl;
    }
    return 0;
}