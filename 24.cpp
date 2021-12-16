
#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    int a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0 ;i<n ;i++)
        {
            cin>>a[i];
        }
        for(i=0 ;i<n ;i+=2)
        {
            cout<<a[i];
            if(i<n-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
