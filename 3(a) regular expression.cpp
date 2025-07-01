//3(a)(0|1)*(100|110|101|111)
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
        else if(s[len-3]=='1' && s[len-2]=='0' && s[len-1]=='0')
            cout<<"Accepted"<<endl;
        else if(s[len-3]=='1' && s[len-2]=='1' && s[len-1]=='0')
            cout<<"Accepted"<<endl;
        else if(s[len-3]=='1' && s[len-2]=='0' && s[len-1]=='1')
            cout<<"Accepted"<<endl;
        else if(s[len-3]=='1' && s[len-2]=='1' && s[len-1]=='1')
            cout<<"Accepted"<<endl;
        else
            cout<<"Rejected"<<endl;
    }
    return  0;
}
