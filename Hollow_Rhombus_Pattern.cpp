/*
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format
Single integer N.
Constraints
N <= 20

Output Format
Print pattern.

Sample Input
5

Sample Output
    *****
   *   *
  *   *
 *   *
*****

Explanation
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

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
            cout<<' ';
            sp=sp+1;
        }
        if(row==1 or row==trow)
        {
            int i=1;
            while(i<=trow)
            {
                cout<<'*';
                i=i+1;
            }
        }
        else
        {
            cout<<'*';
            int sp1=1;
            while(sp1<trow-1)
            {
                cout<<' ';
                sp1=sp1+1;
            }
            cout<<'*';
        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}
