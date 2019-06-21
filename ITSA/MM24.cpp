#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    //freopen("input.txt","r",stdin);
    while(cin>>m>>n)
        cout<<abs(m-n)<<endl;
    return 0;
}
