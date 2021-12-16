
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int k=0;
    while(t--)
    {
        cin>>n;
        k++;
        cout<<"Case "<<k<<":";
        for(int i=1; i<=n ;i++)
        {
            if(n%i==0)
                cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}
