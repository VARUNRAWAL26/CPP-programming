/*
Write a program to print given pattern by taking input N.

Input Format
The first line contains an integer N.
Constraints

Output Format
Display the pattern as result.

Sample Input
5

Sample Output
1 
1 4 
1 4 9 
1 4 9 16 
1 4 9 16 25 

CODE
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int row=1;
    while(row<=trow)
    {
        int a=1;
        int i=1;
        while(i<=row)
        {
            cout<<a*a<<'\t';
            a=a+1;
            i=i+1;
        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}
