#include<iostream>
using namespace std;
int main()
{
    int cnt=0;
    for( int i=1000; i>=1 ;i--)
    {
        cnt++;
        cout<<i<<'\t';
        if(cnt%5==0) cout<<endl;
    }

    return 0;
}
