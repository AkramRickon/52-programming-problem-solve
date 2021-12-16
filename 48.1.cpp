
#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,found;
    int a[100001];
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0 ;i<n-1 ;i++)
        {
            cin>>a[i];
        }

        for(i=1 ;i<=n ;i++)
        {
            found=0;
            for(j=0 ;j<n-1 ;j++)
            {
                if(a[j]==i)
                {
                    found=1;
                }
            }
            if(found==0)
            {
                cout<<i<<endl;
            }
        }

    }
    return 0;
}
