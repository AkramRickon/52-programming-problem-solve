
#include<iostream>
using namespace std;
int main()
{
    int t,cnt;
    double n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        while(n>1)
        {
            n=n/2;
            cnt++;
        }
        cout<<cnt<<" days"<<endl;
    }
    return 0;
}
