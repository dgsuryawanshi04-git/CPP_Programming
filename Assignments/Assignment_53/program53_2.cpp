/////////////////////////////////////////////////////////////////////
//
//  Function Name : CopyArray
//  Description :   copy one array into another array.
//  Input :         string array
//  Output :        - 
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;

    while(iCnt < iSize)
    {
        dest[iCnt] = src[iCnt];
        iCnt++;   
    }
   
}

int main()
{
    char arr[] = "Hello";
    char brr[5];

    CopyArray(arr, brr, 5);
    brr[5] = '\0';

     cout<<"Copyied array is: \n"<<brr;

    return 0;
}