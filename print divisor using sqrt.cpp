
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,t,i,c=0;
    cin>>t;
    while(t--)
    {
        c++;
        cin>>n;
        cout<<"Case "<<c<<":";

        for(i=1 ;i<=(sqrt(n)) ;i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    cout<<" "<<i;
                else cout<<" "<<i<<" "<<n/i;
            }
        }
        cout<<endl;
    }

    return 0;
}
