
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int t;
    char s[1000];
    cin>>t;
    cin.ignore();
    while(t--)
    {
        scanf(" %[^\n]",s);
        char *word;
        word=strtok(s,", ?!;.");
        int cnt=0;
        while(word!=NULL)
        {
            cnt++;
            word=strtok(NULL," ,.?!;");
        }
        cout<<"Count = "<<cnt<<endl;
    }
    return 0;
}
