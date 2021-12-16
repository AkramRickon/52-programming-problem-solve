#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,cnt;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cnt=0;
        getline(cin,s);
        for(int i=0 ;i<s.size() ;i++)
        {
            if(s[i]==' ') cnt++;
        }
        cout<<cnt+1<<endl;

    }
    return 0;
}
