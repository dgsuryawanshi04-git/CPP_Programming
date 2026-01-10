/////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   Find largest number from three numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    if((no1 > no2) && (no1 > no3))
    {
        return no1;
    }
    else if((no2 > no1) && (no2 > no3))
    {
        return no2;
    }
    else
    {
        return no3;
    }  
}

int main()
{

    int iRet = Max(15,2,18);
    cout<<"Maximum between three Integers nos is : "<<iRet<<"\n";

    float fRet = Max(15.8f,2.9f,18.4f);
    cout<<"Maximum between three float nos is : "<<fRet<<"\n";

    return  0;
}