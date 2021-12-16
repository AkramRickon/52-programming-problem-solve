
#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int t,a,b,c;
    double area,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        s=(a+b+c)/2.0;
        area=(s*(s-a)*(s-b)*(s-c));
        area=sqrt(area);
        printf("Area = %0.3lf\n",area);
    }
    return 0;
}
