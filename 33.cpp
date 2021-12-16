
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;

        for(i=a ;i<=b ;i++)
        {
            if(i%c==0)
            {
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
