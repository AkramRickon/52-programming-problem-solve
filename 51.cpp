
#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        for(i=0 ;i<=s1.size()-s2.size() ;i++)
        {
            if(s1[i]==s2[0])
            {
                for(j=1; j<s2.size() ;j++)
                {
                    if(s2[j]!=s1[i+j])
                    {
                        break;
                    }
                }
                if(j==s2.size())
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
