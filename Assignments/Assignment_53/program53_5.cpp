
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Replace
//  Description :   replace old value from new value
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
        cout<<arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    Replace(arr, 9, 10, 15);
   
    return 0;
}