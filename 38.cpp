
#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        for(i=0 ;i<n ;i++)
        {
            for(j=0 ;j<=i ;j++)
            {
                cout<<m;
                if(j<i) cout<<" ";
            }
            cout<<endl;
        }
        for(i=n-1 ;i>0 ;i--)
        {
            for(j=i ;j>0 ;j--)
            {
                cout<<m;
                if(j>1) cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
