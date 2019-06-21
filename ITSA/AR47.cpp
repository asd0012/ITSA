#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long num;
    //freopen("input.txt","r",stdin);
    cin>>num;
    while(1)
    {
        if(num%2==0)
            num/=2;
        else if(num%3==0)
            num/=3;
        else if(num%5==0)
            num/=5;
        else
            break;
    }
    if(num!=1)
        cout<<"Irregular number!"<<endl;
    else
        cout<<"Regular number!"<<endl;
    return 0;
}
