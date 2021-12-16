#include<iostream>
using namespace std;
int main()
{
   long long  int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;

        for(i=1; i<n ; i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }

        if(sum==n)
        {
            cout<<n<<" is a perfect Number"<<endl;
        }
        else
            cout<<n<<" is not a perfect Number"<<endl;
    }
    return 0;
}
