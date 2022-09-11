/*
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format
Constraints
2 < N <= 1000000000
Output Format

Sample Input
3

Sample Output
Prime

Explanation
The output is case specific

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int a,n=0;
    cin>>a;
    int i=1;
    while(i<=a)
    {
        if(a%i==0)
        {
            n=n+1;
        }
        i=i+1;
    }
    if (n==2)
    {
       cout<<"Prime"<<endl;
    }
    else
    {
       cout<<"Not Prime"<<endl;
    }
	return 0;
}
