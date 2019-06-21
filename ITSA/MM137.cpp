#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,exp;
    int i;
    long long sum=1;
  //  freopen("input.txt","r",stdin);
    cin>>n;
    while(n--)
    {
        cin>>exp;
        sum=1;
        for(i=0;i<exp;i++)
            sum*=2;
        cout<<sum<<endl;
    }
}
