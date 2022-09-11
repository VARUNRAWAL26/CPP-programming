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
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

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
        int spc=1;
        while(spc<=trow-row)
        {
            cout<<"\t";
            spc=spc+1;
        }
        int st=1;
        while(st<=row)
        {
            cout<<"*"<<"\t";
            st=st+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
