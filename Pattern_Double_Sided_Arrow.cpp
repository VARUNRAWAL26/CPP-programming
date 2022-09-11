/*
Take N as input. For a value of N=7, we wish to draw the following pattern :
                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 

Input Format
Take N as input.
Constraints
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7

Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 

Explanation
Catch the pattern and print it accordingly.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int row=1;
    int i=0;
    while(row<=(trow+1)/2)
    {
        int sp1=1;
        while(sp1<=trow-row-i)
        {
            cout<<'\t';
            sp1=sp1+1;
        }
        i=i+1;
        int st1=1;
        int a=row;
        while(st1<=row)
        {
            cout<<a<<'\t';
            st1=st1+1;
            a=a-1;
        }
        int sp2=1;
        while(sp2<=2*row-3)
        {
            cout<<'\t';
            sp2=sp2+1;
        }
        int st2=2;
        a=1;
        while(st2<=row+1)
        {
            if(row>=2)
            {
                cout<<a<<'\t';
                a=a+1;
            }
            st2=st2+1;
        }
        row=row+1;
        cout<<endl;
    }
    row=1;
    int c=(trow-1)/2;
    int m=c;
    while(row<=(trow-1)/2)
    {
        int sp1=1;
        while(sp1<=2*row)
        {
            cout<<'\t';
            sp1=sp1+1;
        }
        int st1=1;
        int b=c;
        while(st1<=c)
        {
            cout<<b<<'\t';
            b=b-1;
            st1=st1+1;
        }
        int sp2=1;
        while(sp2<=2*c-3)
        {
            cout<<'\t';
            sp2=sp2+1;
        }
        int st2=1;
        int n=1;
        if(st2!=m-row+1)
        {
            while(st2<=m-row+1)
            {
                cout<<n<<'\t';
                n=n+1;
                st2=st2+1;
            }
        }
        row=row+1;
        c=c-1;
        cout<<endl;
    }
    return 0;
}
