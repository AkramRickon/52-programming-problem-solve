
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string name[n],temp;

    for(i=0 ; i<n ; i++)
    {
        cin>>name[i];
    }

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(name[i]>name[j])
            {
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    for(i=0 ; i<n ; i++)
    {
        cout<<name[i]<<endl;
    }
    return 0;
}
