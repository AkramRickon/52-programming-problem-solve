#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<"Invalid!"<<endl;
            continue;
        }
        for(i=a ; i<=b ; i=i+a)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
