/*
Take the following as input.
A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Input Format
Constraints
0 < N1 < 1000000000 0 < N2 < 1000000000

Output Format

Sample Input
4 
6

Sample Output
12

Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

CODE
*/
#include<iostream>
using namespace std;
int main() {
	int a,b,i=2,n;
    cin>>a;
    cin>>b;
    while (true)
    {
        if(i%a==0 and i%b==0)
        {
            cout<<i<<endl;
            return 0;
        }
        else
        {
            i=i+1;
        }
    }
    return 0;
}
