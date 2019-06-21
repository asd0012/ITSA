#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int i,j;
   // freopen("input.txt","r",stdin);
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
    return 0;
}
