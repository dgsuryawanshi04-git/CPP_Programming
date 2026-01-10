/////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   Return maximum from the array.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T imax;
    int iCnt = 0;

    imax = arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > imax)
        {
            imax = arr[iCnt];
        }
    }
    return imax;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {5.6, 3.7, 9.8, 8.7};

    int iRet = Max(arr, 5);
    cout<<"Maximum of integer : "<<iRet<<"\n";

    float fRet = Max(brr, 4);
    cout<<"Maximum of float is : "<<fRet<<"\n";

    return 0;
}