#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int num=0;
        while(n>0)
        {
            num=(n%10)+(num*10);
            n/=10;
        }
        cout<<num<<endl;

    }
    return 0;
}
/* or
let a variable rev instead of num

rev=rev*10;
rev= rev+ n%10;
n/=10;

*/
