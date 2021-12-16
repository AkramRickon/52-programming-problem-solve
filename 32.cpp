
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        for(i=1;  ;i++)
        {
            if(a>b) cout<<"Invalid!"<<endl;
            if(a*i>b) break;
            else    cout<<a*i<<endl;

        }
    }
    return 0;
}
