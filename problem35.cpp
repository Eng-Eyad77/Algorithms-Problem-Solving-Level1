/*
write a program to ask the user to enter pennies, nickels, quarters, dollars
then calculate the total pennies and total dollars
and print them on the screen
*/

#include <iostream>
#include <string>
using namespace std;

struct stPiggyBankContent
{
    int Pennies, Nickels, Dime, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter total Pennies" << endl;
    cin >> PiggyBankContent.Pennies;

    cout << "Please enter total Nickels" << endl;
    cin >> PiggyBankContent.Nickels;

    cout << "Please enter total Dime" << endl;
    cin >> PiggyBankContent.Dime;

    cout << "Please enter total Quarters" << endl;
    cin >> PiggyBankContent.Quarters;

    cout << "Please enter total Dollars" << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}


int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TotalPennies = 0;
    TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dime * 10 +PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
    return TotalPennies;
}

int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << "Total Pennies: " << TotalPennies << endl;
    cout << "Total Dollars: " << (float)TotalPennies / 100 << endl;

}
