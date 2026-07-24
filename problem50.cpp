/*
write a program to read pin code from the user then check if the pin = 1234 show him the balance 7500.
otherwise print "Wrong PIN"
and the user have only 3 times to try.
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
    int counter = 3;
    
    do
    {
        counter--;
         PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1; // this will return true
        }
        else
        {
            system("color 4F");// turn screen red
            cout << "\nWrong PIN, You Have " << counter << " More tries." << endl;
        }

    } while (counter >= 1 && PinCode != "1234"); // stay in the loop if the counter >= 1 and if pinCode != 1234

    return 0; // when you reach this means check pin code is failed.
}

int main()
{
    if (CheckPinCode())
    {
        system("color 2F"); // this turn screen to green.
        cout << "\nYour Balance is: "<< 7500 << endl;
    }
    else
    {
        cout << "Your Card Has Been Blocked You Should Call The Bank." << endl;
    }
    return 0;
}