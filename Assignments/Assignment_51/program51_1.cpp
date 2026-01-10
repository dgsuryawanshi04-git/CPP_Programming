
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display First value to the second 
//  Input :         -
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          09/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);
    
    return 0;
}