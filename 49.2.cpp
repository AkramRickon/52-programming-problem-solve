#include<iostream>
#include<cmath>
using namespace std;
bool isprime(long long int n)
{
    int i,root,flag;
    root=(double)(sqrt(n));

    if(n==2) return true;
    else if(n<2 || n%2==0) return false;
    else
    {
        for(i=3; i<=root ; i+=2)
        {
            if(n%i==0) return false;
        }
    }
    return true;
}

int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isprime(n))
        {
            cout<<n<<" is a prime"<<endl;
        }
        else
        {
            cout<<n<<" is not a prime"<<endl;
        }
    }
    return 0;
}
