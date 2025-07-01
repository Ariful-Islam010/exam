//3(b) 10+(0+11)0*1
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
      int count0=0,count1=0;
      int len=s.length();
      for(i=0;i<len;i++)
      {
          if(s[i]=='0')
            count0++;
          else if(s[i]=='1')
            count1++;
          else
          {
              count=1;
              break;
          }
      }
      if(count==1)
        cout<<"You put wrong alphabets."<<endl;
      else if(s[0]=='1' && s[1]=='0' && len==2)
         cout<<"Accepted"<<endl;
      else if(count0==len-1 && s[len-1]=='1')
        cout<<"Accepted"<<endl;
      else if(s[0]=='1'&&s[1]=='1'&&count0==len-3&&s[len-1]=='1')
        cout<<"Accepted"<<endl;
      else
        cout<<"Rejected"<<endl;
  }
  return 0;
  }
