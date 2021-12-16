#include<iostream>
#include<cmath>

void sieve()
using namespace std;
int main()
{
    int arr[100001];
    int t,cnt,a,b,i,j,root;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cnt=0;

        arr[0]=arr[1]=0;
        for(i=2; i<=100000 ;i++)
        {
            arr[i]=1;
        }

        root=sqrt(100000);
        for(i=2 ;i<=root ;i++)
        {
            if(arr[i]==1)
            {
                for(j=i*i ;j<=100000 ;j+=i)
                {
                    arr[j]=0;
                }
            }
        }

        for(i=a; i<=b ;i++)
        {
            if(arr[i]==1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
