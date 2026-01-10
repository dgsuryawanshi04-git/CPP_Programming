/////////////////////////////////////////////////////////////////////
//
//  Function Name : Div
//  Description :   return Division of two numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{
    T Ans;
    Ans = no1/no2;
    return Ans;
}

int main()
{
    int iRet = Div(18,5);
    cout<<"Division of two integer :\n "<<iRet;

    float fRet = Div(14.5f,4.3f);
    cout<<"\n\nDivision of float :\n "<<fRet;

    return 0;
}