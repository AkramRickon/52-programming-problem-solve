#include<iostream>
using namespace std;
int main()
{
    int t,a[100001],n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sorted=0;
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-1 ; i++)
        {
            if(a[i]<=a[i+1])
            {
                sorted=0;
            }
            else
            {
                sorted=1;
            }
        }
        if(!sorted)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
