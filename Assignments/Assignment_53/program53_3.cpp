
/////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMax
//  Description :   Return second maximum from the array.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T SecondMax(T *arr, int iSize)
{
    T imax;
    int iCnt = 0;
    T secMax;

    imax = arr[0];
    secMax = arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        
        if(arr[iCnt] > imax)
        {
            secMax = imax;
            imax = arr[iCnt];
        }
        else if(arr[iCnt] > secMax && arr[iCnt] < imax)
        {
            secMax = arr[iCnt];
        }
    }
    return secMax;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {5.6, 3.7, 9.8, 8.7};

    int iRet = SecondMax(arr, 5);
    cout<<"Second Maximum of integer : "<<iRet<<"\n";

    float fRet = SecondMax(brr, 4);
    cout<<"Second Maximum of float is : "<<fRet<<"\n";

    return 0;
}