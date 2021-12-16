
#include<iostream>
using namespace std;
int main()
{
    int x,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        x=s[s.length()-1]-'0';
        if(x%2==0)
            cout<<"Even"<<endl;
        else
            cout<<"Odd"<<endl;
    }
    return 0;
}
