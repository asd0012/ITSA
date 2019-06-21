#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    long long i,sum,num;
    //freopen("input.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        cin>>num;
        sum=1;
        for(i=2;i<=num;i++)
            sum*=i;
        cout<<sum<<endl;
    }
    return 0;
}
