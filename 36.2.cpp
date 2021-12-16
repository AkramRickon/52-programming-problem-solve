
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[20][20],temp[20];
    int n,i,j;
    cin>>n;
    for(i=0 ;i<n ;i++)
    {
        cin>>name[i];
    }
    for(i=0 ;i<n-1 ;i++)
    {
        for(j=i+1; j<n ;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    for(i=0 ;i<n ;i++)
    {
        cout<<name[i]<<endl;
    }
    return 0;
}
