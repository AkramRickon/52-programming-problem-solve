#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);

        for(i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                cout<<s[i];
        }
        cout<<endl;
        for(i=0 ; i<s.size() ; i++)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' &&s[i]!=' ')
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
