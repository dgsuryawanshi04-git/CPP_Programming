/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        pattern
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;
    if(iCnt <= 5)
    {
        cout<< "*\t";
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}