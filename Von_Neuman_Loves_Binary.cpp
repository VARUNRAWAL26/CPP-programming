/*
Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.
Constraints
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111

Sample Output
5
15
6
63

Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.

CODE
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i=0,ld,sum=0;
	int k=0;
	int c,j=0;
	cin>>n;
    while(i<n)
	{
		cin>>c;
		while(c>0)
		{
          ld=c%10;
		  j=ld*pow(2,k);
		  sum=sum+j;
		  k=k+1;
		  c=c/10;
		}
		cout<<sum<<endl;
		i=i+1;
		sum=0;
		k=0;
	}
	return 0;
}
