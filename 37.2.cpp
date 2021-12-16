
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        while(n!=0)
        {
            cout<<n%10;
            n/=10;
        }
        cout<<endl;
    }
    return 0;
}
