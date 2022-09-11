/*
Take the following as input.
A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

Input Format
Constraints
0 < N1 < 100 0 < N2 < 100

Output Format

Sample Input
10 
4

Sample Output
5 
11 
14 
17 
23 
26 
29 
35 
38 
41

Explanation
The output will've N1 terms which are not divisible by N2.

CODE
*/
#include<iostream>
using namespace std;
int main() 
{
	int a,b,i=1, eq;
    cin>>a;
    cin>>b;
    while (a>0)
    {
        eq=(3*i)+2;
        i=i+1;
        if(b%eq!=0 and eq%b!=0)
        {
            cout<<eq<<endl;
            a=a-1;
        }
        else
        {
            continue;
        }
    }
	return 0;
}
