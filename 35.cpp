#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,x1,y1,x2,y2,r,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>x1>>y1>>r>>x2>>y2;
        ans=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
        ans=sqrt(ans);
        if(ans>r)
        {
            cout<<"The point is not inside the circle"<<endl;
        }
        else
            cout<<"The point is inside the circle"<<endl;
    }
    return 0;
}
