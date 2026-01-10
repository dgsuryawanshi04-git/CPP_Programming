
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Min
//  Description :   return smallest element from an array.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    int iCnt = 0;
    T Small;

    Small = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Small )
        {
            Small = arr[iCnt];
        }
    }
    return Small;    
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {5.6, 3.7, 9.8, 8.7, 6.5};
    int iCnt = 0;

    int iRet = Min(arr, 5);
    cout<<"smallest elements(integer) is :\n"<<iRet;

    float fRet = Min(brr, 5);
    cout<<"\n\nsmallest elements(float) is :\n"<<fRet;

    return 0;
}