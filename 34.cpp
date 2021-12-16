#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int t,a,b,c,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int x=(a*b)/gcd(a,b);
        // cout<<x;

        for(i=x ; i<=c ; i+=x)
        {
            cout<<i<<endl;
        }
        cout<<endl;
    }


    return 0;
}
