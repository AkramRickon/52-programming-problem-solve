#include<iostream>
using namespace std;
int main()
{
    int t,x,n,k,i,power;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>k;
        power=1;

        for(i=1 ;i<=n; i++)
        {
            power=power*2;
        }
        cout<<"Result = "<<power%k<<endl;
    }
    return 0;
}
