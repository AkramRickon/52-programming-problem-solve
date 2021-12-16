#include<iostream>
using namespace std;
int main()
{
    int t,cnt,i,j;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        cnt=0;

        for(i=0 ; i<s1.size() ; i++)
        {
            if(s1[i]==s2[0])
            {
                for(j=1; j<s2.size() ; j++)
                {
                    if(s2[j]!=s1[i+j])
                    {
                        break;
                    }
                }
                if(j==s2.size())
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
