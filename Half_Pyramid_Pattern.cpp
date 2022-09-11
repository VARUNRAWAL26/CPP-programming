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
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

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
        int a=1;
        while(a<=row)
        {
            cout<<a<<"\t";
            a=a+1;

        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}
