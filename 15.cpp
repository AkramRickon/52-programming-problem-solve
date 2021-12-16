#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,i,cnt[26];
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        for(i=0 ;i<26 ;i++) cnt[i]=0;

        getline(cin,s);

        for(i=0 ;i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                cnt[s[i]-'a']++;
            }
        }

        for(i=0 ;i<26 ;i++)
        {
            if(cnt[i]>0)
            {
                printf("%c = %d\n",i+'a',cnt[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
