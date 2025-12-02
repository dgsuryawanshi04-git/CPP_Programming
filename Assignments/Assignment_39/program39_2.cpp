/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        (1   2   3   4   5  )
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
        cout<<iCnt <<"\t";
        iCnt++;
       Display();
    }
}

int main()
{
    Display();

    return 0;
}