/*
Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Input Format
There will be an integer in input.
Constraints
0 < N < 100

Output Format
Print the pattern.

Sample Input
5

Sample Output
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5

Explanation
Each number is separated from other by a tab.If row number is n (>1), total character is n. First and last character is n and rest are 0.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trow;
    cin>>trow;
    int row=1;
    while(row<=trow)
    {
        int i=1;
        int a=row;
        int c=0;
        while(i<=row)
        {
            if(c==0)
            {
                cout<<row<<'\t';
            }
            else if(c==row-1)
            {
                cout<<row<<'\t';
            }
            else
            {
                cout<<'0'<<'\t';
            }
            i=i+1;
            c=c+1;
        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}
