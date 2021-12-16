#include<iostream>
using namespace std;
int main()
{
    int t,n,even[21],odd[21],i,j;;
    cin>>t;
    while(t--)
    {
        cin>>n;

        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;
            continue;
        }
        else
        {
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;
            even[0]=1;
            even[1]=1;
            for(i=3 ; i<=n ; i++)
            {
                if(i%2==0)
                {
                    even[0]=1;
                    cout<<even[0]<<" ";
                    for(j=1 ; j<i-1 ; j++)
                    {
                        even[j]=odd[j-1]+odd[j];
                        cout<<even[j]<<" ";
                    }
                    even[j]=1;
                    cout<<even[j]<<endl;

                }
                else
                {
                    odd[0]=1;
                    cout<<odd[0]<<" ";
                    for(j=1; j<i-1 ; j++)
                    {
                        odd[j]=even[j-1]+even[j];
                        cout<<odd[j]<<" ";
                    }
                    odd[j]=1;
                    cout<<odd[j]<<endl;
                }
            }
        }
    }
    return 0;
}
