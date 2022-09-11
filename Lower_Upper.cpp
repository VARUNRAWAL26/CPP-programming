/*
Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format
Single Character .
Constraints

Output Format
lowercase UPPERCASE Invalid

Sample Input
$

Sample Output
Invalid

CODE
*/
#include<iostream>
using namespace std;
int main() {
	char i;
    cin>>i;
    if(i>='a' and i<='z')
        cout<<"lowercase"<<endl;
    else if(i>='A' and i<='Z')
        cout<<"UPPERCASE"<<endl;
    else
        cout<<"Invalid"<<endl;
    return 0;
}
