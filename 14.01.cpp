
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i,cnt;
    string s;
    char ch;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cnt=0;
        getline(cin,s);
        cin>>ch;
        cin.ignore();


        for(i=0 ;i<s.size() ;i++)
        {
            if(s[i]==ch) cnt++;
        }
        if(!cnt)
        {
            cout<<"'"<<ch<<"'"<<" is not present"<<endl;
        }
        else
            cout<<"Occurence of "<<"'"<<ch<<"'"<<" in '"<<s<<"' = "<<cnt<<endl;
    }
    return 0;
}
