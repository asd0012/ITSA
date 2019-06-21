#include<stdio.h>
#include<iostream>
#include<limits.h>
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
    int t,m,minn=INT_MAX,maxx=-1;
    int i,tmp;
    //freopen("input.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        minn=INT_MAX,maxx=-1;
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>tmp;
            if(minn>tmp)
                minn=tmp;
            if(maxx<tmp)
                maxx=tmp;
        }
        cout<<gcd(maxx,minn)<<endl;
    }
    return 0;
}
