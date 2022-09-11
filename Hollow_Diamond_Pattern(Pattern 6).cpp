/*
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *

Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format

Sample Input
5

Sample Output
* * * * *
* *   * *
*       *
* *   * *
* * * * *

Explanation
Each '*' is separated from other by a tab.

CODE
*/

#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>> trow;
    int row=1;
    int m1=(trow+1)/2;
    int m2=(trow-1)/2;
    int i=1;
    while(row<=m1)
    {
        if(row==1 or row==trow)
        {
            int c=1;
            while(c<=trow)
            {
                cout<<"*"<<"\t";
                c=c+1;
            }
        }
        else
        {
            int stc1=1;
            while(stc1<=m1-row+1)
            {
                cout<<"*"<<"\t";
                stc1=stc1+1;
            }
            int spc1=1;
            int i=row;
            while(i<=m1)
            {
                while(spc1<=2*(row-1)-1)
                {
                    cout<<" "<<"\t";
                    spc1=spc1+1;
                }
                i=i+1;
            }
            stc1=1;
            while(stc1<=m1-row+1)
            {
                cout<<"*"<<"\t";
                stc1=stc1+1;
            }
        }
        row=row+1;
        cout<<endl;
    }
    while(row<=trow)
    {
        if(row==trow)
        {
            int c=1;
            while(c<=trow)
            {
                cout<<"*"<<"\t";
                c=c+1;
            }
            return 0;
        }
        else
        {
            int stc2=2;
            while(stc2<=row/2+1)
            {
                cout<<"*"<<"\t";
                stc2=stc2+1;
            }
            int spc2=1;

            while(spc2<=2*(m2-1)-1)
            {
                cout<<" "<<"\t";
                spc2=spc2+1;
            }
            m2=m2-1;
            int stc3=2;
            while(stc3<=row/2+1)
            {
                cout<<"*"<<"\t";
                stc3=stc3+1;
            }
            row=row+1;
            cout<<endl;
        }
    }
    return 0;
}
