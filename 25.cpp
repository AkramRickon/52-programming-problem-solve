

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
    int t,a,b,LCM;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int temp;
        LCM=(a*b)/gcd(a,b);
        cout<<"LCM = "<<LCM<<endl;
    }
    return 0;
}
