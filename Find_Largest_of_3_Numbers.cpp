/*
Input three numbers, print the largest of these numbers

Input Format
Three numbers (both positive and negative numbers are allowed)

Constraints

Output Format
the largest number

Sample Input
5 7 4

Sample Output
7

CODE
*/
#include<iostream>
using namespace std;
int main()
{
	 int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>=b and a>=c)
    {
        cout<<a;
    }
    else if(b>=a and b>=c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
    return 0;
}
