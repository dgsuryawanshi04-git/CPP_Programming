/////////////////////////////////////////////////////////////////////
//
//  Function Name : Sub
//  Description :   return Substraction of two numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Sub(T no1, T no2)
{
    T Ans;
    Ans = no1-no2;
    return Ans;
}

int main()
{
    int iRet = Sub(10,8);
    cout<<"Substraction of integer :\n "<<iRet;

    float fRet = Sub(20.5f,10.3f);
    cout<<"\n\nSubstraction of float :\n "<<fRet;

    return 0;
}