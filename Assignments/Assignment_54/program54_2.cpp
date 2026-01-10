
/////////////////////////////////////////////////////////////////////
//
//  Function Name : SumEven
//  Description :   Return sum of even all elements
//  Input :         -
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template <class T>
T SumEven(T *arr, int iSize)
{
   int iCnt = 0; 
   T iSum = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        if(arr[iCnt] % 2 == 0)
        {
            iSum = iSum + arr[iCnt];
        }
   }
   return iSum;
}

int main()
{
    int arr[] = {12,27,34,45,50};

    int iRet = SumEven(arr, 5);
    cout<<"Sum of Even elements(integer) :\n"<<iRet;  

    return 0;
}