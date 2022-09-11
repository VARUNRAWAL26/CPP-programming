/*
You will be given a number N. You have to code a hollow diamond looking pattern.
The output for N=5 is given in the following image.

Input Format
The input has only one single integer N.
Constraints

Output Format
Output the given pattern.

Sample Input
5

Sample Output
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

Explanation
Write a code to print above given pattern. No space between any two characters.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int row=1;
    while(row<=2*trow-1)
    {
        cout<<"*";
        row=row+1;
    }
    cout<<endl;
    row=2;
    while(row<=trow)
    {
        int st1=1;
        while(st1<=trow-row+1)
        {
            cout<<"*";
            st1=st1+1;
        }
        int sp=1;
        while(sp<=2*(row-1)-1)
        {
            cout<<" ";
            sp=sp+1;
        }
        st1=1;
        while(st1<=trow-row+1)
        {
            cout<<"*";
            st1=st1+1;
        }
        row=row+1;
        cout<<endl;
    }
    row=2;
    int i=(trow+1)/2;
    while(row<=trow-1)
    {
        int st1=1;
        while(st1<=row)
        {
            cout<<"*";
            st1=st1+1;
        }
        int sp=1;
        while(sp<=2*(trow-row)-1)
        {
            cout<<" ";
            sp=sp+1;
        }
        st1=1;
        while(st1<=row)
        {
            cout<<"*";
            st1=st1+1;
        }
        row=row+1;
        i=i-1;
        cout<<endl;
    }
    row=1;
    while(row<=2*trow-1)
    {
        cout<<"*";
        row=row+1;
    }
    return 0;
}
