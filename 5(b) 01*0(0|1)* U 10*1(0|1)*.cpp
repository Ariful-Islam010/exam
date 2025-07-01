//01*0(0|1)* U 10*1(0|1)*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        string s;
        cout<<"Enter the string : ";
        getline(cin,s);
        int i,count=0;
        int len=s.length();
        for(i=0;i<len;i++)
        {
            if(s[i]=='0'||s[i]=='1')
                continue;
            else
            {
               count=1;
               break;
            }
        }
        if(count==1)
            cout<<"You put wrong alphabets."<<endl;
        if(s[0]=='0')
        {
            i=1;
            while(s[i]=='1')
            {
                i++;
            }
            if(s[i]=='0')
                count=2;
        }
        else if(s[0]=='1')
        {
            i=1;
            while(s[i]=='0')
            {
                i++;
            }
            if(s[i]=='1')
                count=2;
        }
        if(count==1)
            cout<<"You put wrong alphabets."<<endl;
        else if(count==2)
            cout<<"Accepted"<<endl;
        else
            cout<<"Rejected"<<endl;
    }
    return 0;
}
