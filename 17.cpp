#include<iostream>
using namespace std;
int main()
{
    int t,i,cnt;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        cnt=0;
        for(i=0 ;i<s.size() ;i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' ||s[i]=='u')
            {
                cnt++;
            }
        }
        cout<<"Number of vowels = "<<cnt<<endl;
    }
    return 0;
}
