
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(1)
    {
    cout<<"Enter the string : ";
    getline(cin,s);
    int i,count=0;
    int len=s.length();

    for(i=0;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='b')
            continue;
        else
        {
           count=1;
           break;
        }
    }
    if(count==1)
        cout<<"We put wrong alphabets"<<endl;
    else if(len<=2)
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    }
    return 0;
}
