/*
Take the following as input.
A number
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.
Write a function that returns its inverse, where inverse is defined as follows
Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.
Print the value returned.

Input Format
Integer
Constraints
0 < N < 1000000000

Output Format
Integer

Sample Input
32145

Sample Output
12543

Explanation
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number. Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int a,n,m,inv=0,i=1;
    cin>>a;
    while(a!=0)
    {
        n=a%10;
        m=1;
        while((n-1)>0)
        {
           m=m*10;
           n=n-1;
        }
        a=a/10;
        inv=inv+i*m;
        i=i+1;
    }
    cout<<inv<<endl;
    return 0;
}
