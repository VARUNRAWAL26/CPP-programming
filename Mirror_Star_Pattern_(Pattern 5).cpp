/*
Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).
      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *

Input Format
Constraints
0 < N < 10 (only odd numbers allowed)

Output Format

Sample Input
5

Sample Output
      *
    * * *
  * * * * *
    * * *
      *

Explanation
Each '*' is separated from other by a tab.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int row=1;
    int n=(trow+1)/2;
    int m=(trow-1)/2;
    while(row<=n)
    {
        int sp1=1;
        while(sp1<=n-row)
        {
            cout<<'\t';
            sp1=sp1+1;
        }
        int st=1;
        while(st<=2*row-1)
        {
            cout<<'*'<<'\t';
            st=st+1;
        }
        row=row+1;
        cout<<endl;
    }
    row=1;
    int a=m;
    while(row<=m)
    {
        int sp=1;
        while(sp<=row)
        {
            cout<<'\t';
            sp=sp+1;
        }
        int st=1;
        while(st<=2*a-1)
        {
            cout<<'*'<<'\t';
            st=st+1;
        }
        a=a-1;
        row=row+1;
        cout<<endl;
    }
    return 0;
}
