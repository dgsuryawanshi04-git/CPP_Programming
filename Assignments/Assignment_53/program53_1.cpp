

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSorted
//  Description :   Check the given array is sorted or not.
//  Input :         array
//  Output :        boolean
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > arr[iCnt + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {5.6, 3.7, 9.8, 8.7};

    bool bRet1 = false;
    bool bRet2 = false;

    bRet1 = CheckSorted(arr, 5);
    
    if(bRet1 == true)
    {
        cout<<"Array is sorted \n";
    }
    else
    {
        cout<<"Array is not sorted \n";
    }

    bRet2 = CheckSorted(brr, 4);
    if(bRet2 == true)
    {
        cout<<"Array is sorted \n";
    }
    else
    {
        cout<<"Array is not sorted \n";
    }
    
    return 0;
}