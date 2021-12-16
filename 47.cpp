
#include<iostream>
using namespace std;
void merge_array(int a[],int b[],int c[],int n1, int n2)
{
    int i=0,k=0,j=0;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            {
                k++;
                j++;
            }
        }
    }
    while(i<n1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }
}
int main()
{
    int a[100000],b[100000];
    int n1,n2,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n1;
        for(i=0 ;i<n1 ;i++)
        {
            cin>>a[i];
        }

        cin>>n2;
        for(i=0 ;i<n2 ;i++)
        {
            cin>>b[i];
        }

        int c[n1+n2];

        merge_array(a,b,c,n1,n2);

        for(i=0 ;i<n1+n2 ;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
