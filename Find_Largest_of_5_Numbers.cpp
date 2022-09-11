/*
Read as input 5 Numbers and print the largest out of them

Input Format
5 Space Separated Numbers (both positive and negative)
Constraints

Output Format

Sample Input
2 4 7 -2 3

Sample Output
7

Explanation
In the given case 7 is largest among the given numbers.

CODE
*/
#include<iostream>
using namespace std;
int main () {
	int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>=b and a>=c and a>=d and a>=e)
        cout<<a;
    else if(b>=a and b>=c and b>=d and b>=e)
        cout<<b;
    else if(c>=a and c>=b and c>=d and c>=e)
        cout<<c;
    else if(d>=a and d>=c and d>=e and d>=b)
        cout<<d;
    else
        cout<<e;
    return 0;
}
