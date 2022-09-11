/*
Take N as input. For a value of N=5, we wish to draw the following pattern :
             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 

Input Format
Take N as input.
Constraints

Output Format
Pattern should be printed with a space between every two values.

Sample Input
5

Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int row=1;
    while(row<=trow)
    {
        int a=trow;
        int c1=1;
        while(c1<=row)
        {
            cout<<a<<" ";
            a=a-1;
            c1=c1+1;
        }
        int sp=1;
        while(sp<=2*(trow-row+1)-1)
        {
            cout<<"  ";
            sp=sp+1;
        }
        a=trow-row+1;
        c1=1;
        while(c1<=row)
        {
            cout<<a<<" ";
            a=a+1;
            c1=c1+1;
        }
        row=row+1;
        cout<<endl;
    }
    int a=trow;
    while(a>=0)
    {
        cout<<a<<" ";
        a=a-1;
    }
    a=1;
    while(a<=trow)
    {
        cout<<a<<" ";
        a=a+1;
    }
    cout<<endl;
    row=1;
    while(row<=trow)
    {
        int c1=1;
        int b=trow;
        while(c1<=trow-row+1)
        {
            cout<<b<<" ";
            b=b-1;
            c1=c1+1;
        }
        int sp=1;
        while(sp<=2*row-1)
        {
            cout<<"  ";
            sp=sp+1;
        }
        c1=1;
        b=row;
        while(c1<=trow-row+1)
        {
            cout<<b<<" ";
            b=b+1;
            c1=c1+1;
        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}
