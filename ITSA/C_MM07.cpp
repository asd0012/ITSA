#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int x,sum=1;
    int i;
   // freopen("input.txt","r",stdin);
    while(cin>>x)
    {
        sum=1;
        for(i=0;i<2;i++)
        {
            sum*=x;
            cout<<sum<<" ";
        }
        cout<<sum*x<<endl;
    }
    return 0;
}
