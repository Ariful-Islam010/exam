//0*1(0+10*1)*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        string s;
        cout << "Enter the string : ";
        getline(cin,s);

        int i,count=0;
        int len=s.length();

        for(i=0;i<len;i++)
        {
            if(s[i]=='0' || s[i]=='1')
                continue;
            else
            {
                count=1;
                break;
            }
        }

        if(count==1)
        {
            cout<<"You put wrong alphabets."<<endl;
            continue;
        }
        i = 0;
        while(s[i]=='0')
            i++;
        if(s[i]=='1')
            i++;
        else
        {
            count=2;
            break;
        }
        // (0 + 10*1)*
        while(i<len)
        {
            if(s[i]=='0')
            {
                i++;
            }
            else if(s[i]=='1')
            {
                i++;
                while(s[i]=='0')
                    i++;
                if(s[i]=='1')
                    i++;
                else
                {
                    count=2;
                    break;
                }
            }
            else
            {
                count=2;
                break;
            }
        }

        if(count==1)
            cout<<"You put wrong alphabets."<<endl;
        else if(count==2)
            cout<<"Rejected"<<endl;
        else
            cout<<"Accepted"<<endl;
    }
    return 0;
}
