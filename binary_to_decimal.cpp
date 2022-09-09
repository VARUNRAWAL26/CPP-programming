/*
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints

0 < N <= 1000000000
Output Format

Sample Input
101010

Sample Output
42

Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.

code
*/
#include<iostream>
using namespace std;
int main() {
	int bin,i=0,n,dec=0,m=1;
    cin>>bin;
    while(bin>0)
    {
        n=bin%10;
        if (i==0)
        {
            dec=dec+n*1;
            i=i+1;
        }
        else
        {
            while(i>0)
            {
                m=m*2;
                i=i-1;
            }
            dec=dec+n*m;
            i=i+1;
        }
        bin=bin/10;
    }
    cout<<dec;
	return 0;
}
