#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float c,f,k;
    //freopen("input.txt","r",stdin);
    while(cin>>c)
    {
        f=c*1.8+32;
        k=c+273.15;
        cout<<fixed<<setprecision(2)<<"Fahrenheit = "<<f<<endl;
        cout<<fixed<<setprecision(2)<<"Absolute temperature = "<<k<<endl;
    }
    return 0;
}
