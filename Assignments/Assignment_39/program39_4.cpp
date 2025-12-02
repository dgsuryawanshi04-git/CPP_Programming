/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         char
//  Output :        (A B C D E F)
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'A';
    if(ch >= 'A' && ch <= 'F')
    {
        cout<<ch <<"\t";
        ch++;
       Display();
    }
}

int main()
{
    Display();

    return 0;
}