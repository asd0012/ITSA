#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int t,n,ans=0;
    //freopen("input.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        while(n!=1)
        {
            if(n%2==0)
            {
                n/=2;
                ans++;
            }
            else
            {
                n=3*n+1;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
