/*
Take N as input. Print Nth Fibonacci Number, given that the first two numbers in the Fibonacci Series are 0 and 1.

Input Format
Constraints
0 <= N <= 1000

Output Format

Sample Input
10

Sample Output
55

Explanation
The 0th fibonnaci is 0 and 1st fibonnaci is 1.

CODE
*/
#include<iostream>
using namespace std;
int main() {
	int a,fib=1,i=0,j;
    cin>>a;
    if(a==0 or a==1)
    {
        cout<<a;
        return 0;
    }
    else
    {
        while(a>1)
        {
            j=fib;
            fib=fib+i;
            i=j;
            a=a-1;
        }
        cout<<fib;
    }
	return 0;
}
