/////////////////////////////////////////////////////////////////////
//
//  Function Name : AddN
//  Description :   Return addition of the array values.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T Sum;
    int i = 0;

    Sum = arr[0] - arr[0];

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iSum = AddN(arr, 5);
    cout<<"Summation of integer : "<<iSum<<"\n";

    float fSum = AddN(brr, 4);
    cout<<"Summation of float is : "<<fSum<<"\n";

    return 0;
}