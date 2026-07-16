/* 
Write a Program you enter the name and i print your name.
*/
#include <iostream>
#include <string>
using namespace std;


string ReadName()
{
    string Name;
    cout << "Please Enter Your Name: " << endl;
    getline(cin , Name);

   return Name;


}

void PrintName(string name)
{
    cout << "Your Name is: "  << name << endl; 
}


int main ()
{
    PrintName(ReadName());


    return 0;
}