/*
Take as input N, a number. Print the pattern according to given input and output section.

Input Format
Integer
Constraints
1 <= N <= 100;

Output Format
Pattern

Sample Input
3

Sample Output
*
**
***

CODE
*/
#include<iostream>
using namespace std;
int main() {
	int trow;
	cin>>trow;
	int row=1;
	while(row<=trow)
	{
		int i=1;
		while(i<=row)
		{
			cout<<'*';
			i=i+1;
		}
		row=row+1;
		cout<<endl;
	}
	return 0;
}
