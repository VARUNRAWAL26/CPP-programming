/*
Take N (number of rows), print the following pattern (for N = 4)
1
2 3
4 5 6
7 8 9 10

Input Format
Constraints
0 < N < 100

Output Format

Sample Input
4

Sample Output
1  
2	3  
4	5	6  
7	8	9	10

Explanation
Each number is separated from other by a tab.

CODE
*/
#include<iostream>
using namespace std;
int main()
{
    int trows;
    cin>>trows;
    int row=1;
    int c=1;
    while(row<=trows)
    {
        int i=1;
        while(i<=row)
        {
            cout<<c<<"\t";
            c=c+1;
            i=i+1;
        }
        row=row+1;
        cout<<endl;
    }
    return 0;
}
