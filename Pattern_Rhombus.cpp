/*
Take N (number of rows), print the following pattern (for N = 3).

                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1

Input Format
Constraints
0 < N < 10

Output Format

Sample Input
3

Sample Output
    1
	2	3	2
3	4	5	4	3
	2	3	2
		1

Explanation
Each number is separated from other by a tab.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int c=trow;
    trow=2*trow-1;
    int row=1;
    while(row<=trow/2+1)
    {
        int sp1=1;
        while(sp1<=(c-row))
        {
            cout<<"\t";
            sp1=sp1+1;
        }
        int st1=1;
        int g=row;
        while(st1<=row)
        {
            cout<<g<<"\t";
            g=g+1;
            st1=st1+1;
        }
        g=g-2;
        int st2=1;
        while(st2<=row-1)
        {
            cout<<g<<"\t";
            g=g-1;
            st2=st2+1;
        }
        cout<<endl;
        row=row+1;
    }
    row=1;
    while(row<=trow/2)
    {
        int sp=1;
        while(sp<=row)
        {
            cout<<"\t";
            sp=sp+1;
        }
        int st1=1;
        int g=trow/2-row+1;
        while(st1<c-row+1)
        {
            cout<<g<<"\t";
            st1=st1+1;
            g=g+1;
        }
        g=g-2;
        int st2=1;
        while(st2<c-row)
        {
            cout<<g<<"\t";
            st2=st2+1;
            g=g-1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
