#include<iostream>
using namespace std;
int main()
{
    int x;
    string s;
    cin>>s;
    int chk=0;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='0')
            chk++;
    }
    if(chk==s.size())
    {
        cout<<"Invalid input"<<endl;
        return 0;
    }

    x=s[s.size()-1]-'0';
    if(x&1)
        cout<<"Odd"<<endl;
    else
        cout<<"Even"<<endl;

    return 0;
}
