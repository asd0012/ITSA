#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float m,n;
   // freopen("input.txt","r",stdin);
    cin>>m>>n;
    cout<<fixed<<setprecision(1)<<(m*n)/2<<endl;
    return 0;
}
