#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long n,i;
    long long sum=1;
    //freopen("input.txt","r",stdin);
    while(cin>>n)
    {
        sum=1;
        for(i=2;i<=n;i++)
            sum*=i;
        cout<<sum<<endl;
    }
    return 0;
}
