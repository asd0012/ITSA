#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    float x1,x2;
    float y1,y2;
    //freopen("input.txt","r",stdin);
    cin>>x1>>y1;
    cin>>x2>>y2;
    cout<<(y1-y2)/(x1-x2)<<endl;
    return 0;
}
