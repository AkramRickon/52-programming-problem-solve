#include<iostream>
using namespace std;
long long int factorial(int n)
{
    long long int fact=1;

    for(int i=1 ; i<=n ; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int t,i,n,fact;
    double sum;

    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=1 ; i<=n ; i++)
        {
            fact=factorial(i);
            sum+=(double) i/fact;
        }
        cout<<sum<<endl;
    }

    return 0;
}
