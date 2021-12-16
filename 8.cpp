#include<iostream>
using namespace std;
int main()
{
    int t,temp,kase,a,b,c;
    cin>>t;

    for(kase=1 ; kase<=t ; kase++)
    {
        cin>>a>>b>>c;

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        if(b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        cout<<"Case "<<kase<<": ";
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
