#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    char ch;
    int t,cnt,i;
    cin>>t;
    cin.ignore();
    while(t--)
    {
       getline(cin,s);
       cin>>ch;
       cnt=0;
       for(i=0 ;i<s.size(); i++)
       {
           if(s[i]==ch) cnt++;
       }
       if(!cnt)
       {
           printf("Occurence of 'ch' in s is",%c,%s,%d);
       }

    }

    return 0;
}
