/////////////////////////////////////////////////////////////////////
//
//  Function Name : SearchLast
//  Description :   Search last occurence of any specific number.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          09/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iPos = 1, iLast = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iLast = iPos;
        }
        iPos++;
    }
    return iLast;

}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    int iRet = SearchLast(arr,9,40);
    cout<<"Last Occurance is : "<<iRet<<"\n";
    
    return 0;
}