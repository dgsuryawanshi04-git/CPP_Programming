/////////////////////////////////////////////////////////////////////
//
//  Function Name : Min
//  Description :   Return smallest value of the array.
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
    T imin;
    int iCnt = 0;

    imin = arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < imin)
        {
            imin = arr[iCnt];
        }
    }
    return imin;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {5.6, 3.7, 9.8, 8.7};

    int iRet = Min(arr, 5);
    cout<<"Minimum of integer is : "<<iRet<<"\n";

    float fRet = Min(brr, 4);
    cout<<"Minimum of float is : "<<fRet<<"\n";

    return 0;
}