/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         char
//  Output :        (a b c d e f)
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'a';
    if(ch >= 'a' && ch <= 'f')
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