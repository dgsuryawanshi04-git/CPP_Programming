
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description :   Reverse the array.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
T Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = 0;
    T temp;

    end = iSize - 1;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {5.6, 3.7, 9.8, 8.7, 6.5};
    int iCnt = 0;

    int iRet = Reverse(arr, 5);

    cout<<"Reverse array(integer) is :\n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<arr[iCnt]<<" ";
    }

    float fRet = Reverse(brr, 5);

    cout<<"\n\nReverse array(float) is :\n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<brr[iCnt]<<" ";
    }


    return 0;
}