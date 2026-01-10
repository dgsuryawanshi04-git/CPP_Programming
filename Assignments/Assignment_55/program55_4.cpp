/////////////////////////////////////////////////////////////////////
//
//  Function Name : Swap
//  Description :   Swap two values.
//  Input :         generic
//  Output :        -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
void Swap(T &no1, T &no2)
{
    T temp;

    temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int a = 10, b = 20;
    Swap(a,b);
    cout<<"Swapping of integer : \na : "<<a<<"\nb : "<<b;
    
    float x = 3.5f, y = 7.8f;
    Swap(x,y);
    cout<<"\n\nSwapping of float : \nx : "<<x<<"\ny : "<<y;

    
    return 0;
}