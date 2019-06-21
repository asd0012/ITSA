#include<stdio.h>
#include<iostream>
using namespace std;

int gcd(int m,int n)
{
    if(!n)
        return m;
    else
        return gcd(n,m%n);
}

int main()
{
    int m,n,ans;
    //freopen("input.txt","r",stdin);
    cin>>m>>n;
    ans=gcd(m,n);
    cout<<ans<<endl;
    return 0;
}
