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

        for(i=s.length()-1; i>=0; i--)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
