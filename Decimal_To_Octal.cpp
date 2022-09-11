/*
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format

Sample Input
63

Sample Output
77

Explanation
Both input and output are integers

CODE
*/
#include<iostream>
using namespace std;
int main() {	
    int a, n, oct=0,i=1;
    cin>>a;
    while(a>0)
    {
        n=a%8;
        oct=oct+i*n;
        a=a/8;
        i=i*10;
    }
    cout<<oct;
    return 0;
}
