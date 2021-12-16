
#include<iostream>
using namespace std;
int main()
{
    int t,n,i,total;
    int a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        total=0;
        for(i=0 ;i<n-1 ;i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        cout<<(n*(n+1)/2)-total<<endl;
    }
    return 0;
}
