/*
Take the following as input.
A number (N1)
A number (N2)

Write a function which prints all armstrong numbers between N1 and N2 (inclusive).
371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

Input Format
Constraints
0 < N1 < 100 N1 < N2 < 10000

Output Format

Sample Input
400
1000

Sample Output
407

Explanation
Each number in output is in separate line.

CODE
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1, n2;
    cin>>n1>>n2;
    int b=n1;
    while(b<=n2)
    {
        int i=b;
        int c=0;
        while(i>0)
        {
            i=i/10;
            c=c+1;
        }
        int sum=0;
        i=b;
        int a;
        while(i>0)
        {
            a=i%10;
            sum=sum+pow(a,c);
            i=i/10;
        }
        if(sum==b)
        {
            cout<<b<<endl;
        }
        b=b+1;
    }
    return 0;
}
