
#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j;
    long long int a[50][50];
    cin>>t;
    while(t--)
    {
        cin>>n;

        a[1][0]=1;
        a[2][0]=1;
        a[2][1]=1;

        for(i=3 ; i<=n ; i++)
        {
            a[i][0]=1;
            for(j=1 ; j<i-1 ; j++)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            a[i][j]=1;
        }

        for(i=1 ; i<=n ; i++)
        {
            for(int k=i ;k<n ;k++)  ///print space
            {
                cout<<" ";
            }
            for(j=0 ; j<i ; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
