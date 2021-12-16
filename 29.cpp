#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    char s;
    cin>>t;
    while(t--)
    {
        cin>>s;

        if(s>='a' && s<='z')
        {
            cout<<"Lower case Character"<<endl;
        }
        else  if(s>='A' && s<='Z')
        {
            cout<<"Upper Case Character"<<endl;
        }
        else  if(s>='0' && s<='9')
        {
            cout<<"Numerical Digit"<<endl;
        }
        else
            cout<<"Special Character"<<endl;

    }
    return 0;
}
