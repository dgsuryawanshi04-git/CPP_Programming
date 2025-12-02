/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        (5   4   3   2   1)
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 5;
    if(iCnt != 0)
    {
        cout<<iCnt <<"\t";
        iCnt--;
       Display();
    }
}

int main()
{
    Display();

    return 0;
}