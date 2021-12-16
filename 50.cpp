#include<iostream>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0 ;i<s.size() ;i++)
        {
            if(s[i]=='L')
            {
                cout<<s[i-1];
            }
            else if(s[i]=='R')
            {
                cout<<s[i+1];
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
