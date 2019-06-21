#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int num,fare;
   // freopen("input.txt","r",stdin);
    while(cin>>num>>fare)
        sum+=(num*fare);
    cout<<sum<<endl;
    return 0;
}
