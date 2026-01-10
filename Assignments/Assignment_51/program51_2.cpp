/////////////////////////////////////////////////////////////////////
//
//  Function Name : frequency
//  Description :   count frequency of any number.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          09/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T iNo)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    int iRet = Frequency(arr,9,10);
    cout<<"Frequncy is : "<<iRet<<"\n";
    
    return 0;
}