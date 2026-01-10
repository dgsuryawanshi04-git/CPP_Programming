/////////////////////////////////////////////////////////////////////
//
//  Function Name : SearchFirst
//  Description :   Search first occurence of any specific number.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          09/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int iPos = 1;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return iPos;
        }
        iPos++;
    }
    return iPos;

}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    int iRet = SearchFirst(arr,9,40);
    cout<<"First Occurance is : "<<iRet<<"\n";
    
    return 0;
}