

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Search
//  Description :   Check the given array and search the value present or not.
//  Input :         array
//  Output :        boolean
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
bool Search(T *arr, int iSize, T value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int a[] = {10,20,30,40,50};
    float b[] = {5.6, 3.7, 9.8, 8.7};

    bool bRet1 = false;
    bool bRet2 = false;

    bRet1 = Search(a, 5, 90);
    
    if(bRet1 == true)
    {
        cout<<"Value is present\n";
    }
    else
    {
        cout<<"Value is not present \n";
    }

    bRet2 = Search(b, 4, 3.7f);

    if(bRet2 == true)
    {
        cout<<"Value is present\n";
    }
    else
    {
        cout<<"Value is not present \n";
    }
    
    return 0;
}