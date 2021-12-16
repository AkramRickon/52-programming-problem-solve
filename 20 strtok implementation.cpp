
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int t,cnt,i,j;

    string s,word;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);

        for(i=0 ; i<s.size(); i++)
        {
            if(s[i]!=' ' && s[i]!=',' && s[i]!='?' && s[i]!='.' && s[i]!='!')
            {
                word+=s[i];
            }
            else
            {
                if(word.size()>0)
                {
                    cout<<word;
                    cout<<endl;
                    word="";
                }
            }
        }

    }
    return 0;
}
