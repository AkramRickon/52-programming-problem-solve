
#include<iostream>
using namespace std;
int main()
{
    int t,x,k,i;
    long long int power,sum;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        sum=1;
        power=1;

        for(i=1 ;i<=k ;i++)
        {
            power=power*x;
            sum+=power;
        }
        cout<<"Result = "<<sum<<endl;
    }
    return 0;
}
