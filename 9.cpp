#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sqRt;
        cin>>n;
        sqRt=sqrt(n);
        if(sqRt*sqRt==n)
        {
            cout<<"YES"<<endl;
        }
        else    cout<<"NO"<<endl;
    }
    return 0;
}
