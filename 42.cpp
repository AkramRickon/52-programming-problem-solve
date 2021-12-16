
#include<iostream>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=n ;i>=0 ;i--)
        {
            if(i==0)
            {
                cout<<1<<endl;
            }
            else if(i==1)
            {
                cout<<2<<" + ";
            }
            else
            {
                cout<<2<<"^"<<i<<" + ";
            }
        }
    }
    return 0;
}
