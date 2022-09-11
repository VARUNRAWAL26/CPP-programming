/*
Take as input N, a number. Print the pattern like this.
for N = 5
5
3
1
2
4

Input Format
Number
Constraints
1 <= N <= 100

Output Format
Pattern

Sample Input
10

Sample Output
9
7
5
3
1
2
4
6
8
10

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    if(a%2==1)
    {
        b=a;
        while(b>0)
        {
            cout<<b<<endl;
            b=b-2;
        }
        if(b==0)
        {
            b=b+1;
        }
        else
        {
            b=b+3;
        }

        while(b<=a)
        {
            cout<<b<<endl;
            b=b+2;
        }
    }
    else
    {
		b=a-1;
        while(b>0)
        {
            cout<<b<<endl;
            b=b-2;
        }
        if(b==0)
        {
            b=b+1;
        }
        else
        {
            b=b+3;
        }

        while(b<=a)
        {
            cout<<b<<endl;
            b=b+2;
        }
    }
    return 0;
}
