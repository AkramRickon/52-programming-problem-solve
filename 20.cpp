
#include<iostream>
using namespace std;
int main()
{
    int t,i,cnt;
    string s;
    cin>>s;
    cin.ignore();
    while(t--)
    {
        cnt=0;
        getline(cin,s);

        for(i=0 ;i<s.size() ;i++)
        {
            if(s[i]==' ' || s[i]==',' || s[i]==';' ||s[i]=='"')
                cnt++;
        }
        cout<<"Count = "<<cnt+1<<endl;
    }
    return 0;
}
