/*
Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

Input Format
Constraints
0 < N <= 1000000000

Output Format

Sample Input
2635

Sample Output
11
5

Explanation
5 is present at 1st position, 3 is present at 2nd position, 6 is present at 3rd position and 2 is present at 4th position.
Sum of odd placed digits on first line. 5 and 6 are placed at odd position. Hence odd place sum is 5+6=11
Sum of even placed digits on second line. 3 and 2 are placed at even position. Hence even place sum is 3+2=5

CODE
*/
#include<iostream>
using namespace std;
int main() {
	int a,sum1=0,sum2=0,k=0,n;
    cin>>a;
    while(a>0)
    {
        n=a%10;
        if(k==0)
        {
            sum1=sum1+n;
            k=1;
        }
        else
        {
            sum2=sum2+n;
            k=0;
        }
        a=a/10;
    }
    cout<<sum1<<endl;
    cout<<sum2<<endl;
	return 0;
}
