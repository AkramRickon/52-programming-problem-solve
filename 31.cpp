
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,i,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=2 ; i<=n ; i++)
        {
            int root=sqrt(i);
            int sum=1;

            for(j=2 ; j<=root ; j++)
            {
                if(i%j==0)
                {
                    sum+=j+i/j;
                }
            }
            if(sum==i)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
