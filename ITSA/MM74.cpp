#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int i,j;
    int ans=0;
   // freopen("input.txt","r",stdin);
    while(cin>>m>>n)
    {
        ans=0;
        for(i=m;i<=n;i++)
            if(i%2==1)
                ans+=i;
        cout<<ans<<endl;
    }
    return 0;
}
