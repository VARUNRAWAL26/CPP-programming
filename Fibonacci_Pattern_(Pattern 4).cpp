/*
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format
Constraints
0 < N < 100

Output Format

Sample Input
4

Sample Output
0 
1    1 
2    3     5 
8   13    21    34

Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int row=1;
    int i=0;
    int p=1;
    int fib=0;
    while(row<=trow)
    {
        int n=1;
        while(n<=row)
        {
            cout<<fib<<'\t';
            n=n+1;
            i=p;
            p=fib;
            fib=i+p;
        }
        fib=i+p;
        row=row+1;
        cout<<endl;
    }

    return 0;
}
