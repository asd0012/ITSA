#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i;
    string a;
    //freopen("input.txt","r",stdin);
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        a[i]-=3;
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
