/////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description :   Reverse the array.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          09/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = iSize - 1;
    T temp;

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
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int i = 0;

    for(i = 0; i < 9; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";

    Reverse(Arr, 9);

     for(i = 0; i < 9; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";

    return 0;
}