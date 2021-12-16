
#include<iostream>
using namespace std;
int series(int x,int k)
{
    int i,power=1;
    for(i=1 ;i<=k+1 ;i++)
    {
        power=power*x;
    }
    return power;
}
int main()
{
    int t,x,k,ans,power;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        power=series(x,k)-1;
        cout<<power*1.0/(x-1)<<endl;
    }
    return 0;
}
