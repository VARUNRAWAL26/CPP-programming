/*
Take N as input, Calculate it's reverse also Print the reverse.

Input Format
Constraints

0 <= N <= 1000000000
Output Format

Sample Input
123456789

Sample Output
987654321

Explanation
You've to calculate the reverse in a number, not just print the reverse.

code
*/
#include<iostream>
using namespace std;
int main() {
	int a, rev=0, n;
	cin>>a;
	while(a>0)
	{
		n=a%10;
		rev=(rev*10)+n;
		a=a/10;
	}
	cout<<rev;

	return 0;
}
