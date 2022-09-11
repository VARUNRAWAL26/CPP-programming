/*
Take N (number of rows), print the following pattern (for N = 4).
                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4

Input Format
Constraints
0 < N < 10

Output Format

Sample Input
4

Sample Output
      1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4

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
    int row=1;
    while(row<=trow)
    {
        int sp=1;
        while(sp<=trow-row)
        {
            cout<<'\t';
            sp=sp+1;
        }
        int st=1;
        int a=row;
        int i=1;
        while(st<=2*row-1)
        {
            if(i<row)
            {
                cout<<a<<'\t';
                a=a+1;
                st=st+1;
                i=i+1;
            }
            else
            {
                cout<<a<<'\t';
                a=a-1;
                st=st+1;
            }
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
