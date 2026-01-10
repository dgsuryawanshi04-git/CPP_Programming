/////////////////////////////////////////////////////////////////////
//
//  Function Name : Add
//  Description :   return Addition of two numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Add(T no1, T no2)
{
    T Ans;
    Ans = no1+no2;
    return Ans;
}

int main()
{
    int iRet = Add(10,20);
    cout<<"Addition of integer :\n "<<iRet;

    float fRet = Add(10.5f,20.3f);
    cout<<"\n\nAddition of float :\n "<<fRet;

    return 0;
}