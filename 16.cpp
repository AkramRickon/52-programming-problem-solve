#include<iostream>
using namespace std;
void riverse(string s)
{
    for(int i=s.size()-1 ; i>=0 ; i--)
    {
        cout<<s[i];
    }
}
int main()
{
    int i,j,t;
    string s,w;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        w="";
        for(i=0 ; i<s.size() ; i++)
        {
            if(s[i]!=' ')
            {
                w+=s[i];
            }
            else if(w.size()>0)
            {
                riverse(w);
                w="";
                cout<<" ";
            }
        }
        riverse(w);
        cout<<endl;
    }
    return 0;
}
