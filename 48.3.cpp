
#include<iostream>
using namespace std;
int a[100001];
int main()
{
    int n,i;
    cin>>n;
    for(i=1 ;i<=n-1 ;i++)
    {
        cin>>a[i];
        a[i]++;
    }
    for(i=1 ;i<=n ;i++)
    {
        if(a[i]==0)
            cout<<i<<endl;
    }
    return 0;
}
