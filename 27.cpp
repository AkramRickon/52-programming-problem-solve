
#include<iostream>
using namespace std;
int main()
{
    int t,n,res,rem,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        res=0;
        temp=n;
        while(temp>0)
        {
            rem=temp%10;
            res+=(rem*rem*rem);
            temp/=10;

        }
        if(n==res)
        {
            cout<<n<<" is an armstrong number!"<<endl;
        }
        else cout<<n<<" is not an armstrong number!"<<endl;
    }
    return 0;
}
