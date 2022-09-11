/*
Take N (number of rows), print the following pattern (for N = 4).
                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   

Input Format
Constraints
0 < N < 10

Output Format

Sample Input
4

Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1

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
        int st1=1;
        while(st1<=row)
        {
            cout<<st1<<'\t';
            st1=st1+1;
        }
        int sp=1;
        while(sp<=2*(trow-row)-1)
        {
            cout<<'\t';
            sp=sp+1;
        }
        st1=1;
        int c=row;
        while(st1<=row)
        {
            if(c==trow)
            {
                st1=st1+1;
                c=c-1;
            }
            else
            {
                cout<<c<<'\t';
                st1=st1+1;
                c=c-1;
            }
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
