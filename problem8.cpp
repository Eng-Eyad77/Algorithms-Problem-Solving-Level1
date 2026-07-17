/*
Write a Program to ask the user to enter a  his mark and check if the mark >= 50 print pass on the screen 
and if the mark < 50 print fail on the screen.
*/
#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2};
int ReadMark()
{
    int mark;
    cout << "Please Enter Your mark: " << endl;
    cin >> mark;

    return mark;
}

enPassFail CheckMark(int mark)
{
    if(mark >= 50)
    return enPassFail::Pass;
    else
    return enPassFail::Fail;
}

void PrintResult(int mark)
{
    if(CheckMark(mark) == enPassFail::Pass)
    cout << "You Passed" << endl;
    else
    cout << "You Failed" << endl;
}

int main()
{

    PrintResult(ReadMark());

    return 0;
}