
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
            cout<<s[i]-64;
        }
        cout<<endl;
    }
    return 0;
}
