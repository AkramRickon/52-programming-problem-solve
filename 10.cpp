
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t,r,b;
    double cr,ar;
    cin>>t;
    while(t--)
    {
        cin>>t>>r>>b;
        int ball_played=300-b;
        cr=(r*1.0/ball_played)*6;
        ar=((t-r+1)*1.0/b)*6;
        cout<<fixed<<setprecision(2)<<cr<<" ";
        cout<<fixed<<setprecision(2)<<ar<<endl;
    }
    return 0;
}
