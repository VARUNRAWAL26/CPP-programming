/*
Write a program to print square pattern by taking input N.

Input Format
The first line contains an integer N.
Constraints

Output Format
Display the pattern as result.

Sample Input
5

Sample Output
1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5

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
        int i=1;
        int a=row;
        while(i<=trow)
        {
            if(i<=a)
            {
                cout<<a<<'\t';
            }
            else
            {
                cout<<i<<'\t';
            }
            i=i+1;
        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}
