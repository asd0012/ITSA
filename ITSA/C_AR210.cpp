#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    char x;
    //freopen("input.txt","r",stdin);
    cin>>n;
    while(n--)
    {
        cin>>x;
        x=x+2;
        cout<<x<<endl;
    }
    return 0;
}
