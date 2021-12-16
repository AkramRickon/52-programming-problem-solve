#include<iostream>
using namespace std;
int main()
{
    int t,n,p,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        p=5;
        while(p<=n)
        {
            ans=ans+(n/p);
            p=p*p;
        }
        cout<<ans<<endl;
    }
    return 0;
}
