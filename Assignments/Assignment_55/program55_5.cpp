/////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   find maximum of four values.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    }
    else if(b > a && b > c && b > d)
    {
        return b;
    }
    else if(c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int iRet = Max(6, 8, 2, 9);
    cout<<"Maximum between four integer values :\n"<<iRet;

    float fRet = Max(6.2f, 8.1f, 12.5f, 9.8f);
    cout<<"\n\nMaximum between four float values :\n"<<fRet;
    
    return 0;
}