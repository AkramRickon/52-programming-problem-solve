
#include<iostream>
#include<cmath>
using namespace std;
void isprime(long long int n)
{
    int root,i;
    root=sqrt(n);
    for(i=2 ; i<=root ; i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime"<<endl;
            break;
        }
    }
    if(i>root)
    {
        cout<<n<<" is a prime"<<endl;
    }
}

int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        isprime(n);
    }
    return 0;
}
