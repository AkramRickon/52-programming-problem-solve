[=
#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    string s,r;
    cin>>t;
    while(t--)
    {
        cin>>s;
        r="";
        for(i=s.size()-1 ;i>=0 ;i--)
        {
            r+=s[i];
        }
        if(s==r)
        {
            cout<<"Yes! It is a palindrome!"<<endl;
        }
        else cout<<"Sorry! It is not palindrome"<<endl;

    }
    return 0;
}
