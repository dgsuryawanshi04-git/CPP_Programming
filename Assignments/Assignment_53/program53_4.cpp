
/////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMin
//  Description :   Return second minimum from the array.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
T SecondMin(T *arr, int iSize)
{
    T iMin;
    int iCnt = 0;
    T secMin;

    if(arr[0] < arr[1])
    {
        iMin = arr[0];
        secMin = arr[1];
    }
    else
    {
        iMin = arr[1];
        secMin = arr[0];
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < iMin)
        {
            secMin = iMin;
            iMin = arr[iCnt];
        }
        else if(arr[iCnt] > iMin && arr[iCnt] < secMin)
        {
            secMin = arr[iCnt];
        }
    }
    return secMin;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {5.6, 3.7, 9.8, 8.7};

    int iRet = SecondMin(arr, 5);
    cout<<"Second minimum of integer : "<<iRet<<"\n";

    float fRet = SecondMin(brr, 4);
    cout<<"Second minimum of float is : "<<fRet<<"\n";

    return 0;
}