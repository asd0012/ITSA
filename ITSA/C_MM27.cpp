#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int num;
    //freopen("input.txt","r",stdin);
    while(cin>>m>>n)
    {
        num=abs(m-n)+1;
        cout<<num*(m+n)/2<<endl;
    }
    return 0;
}
