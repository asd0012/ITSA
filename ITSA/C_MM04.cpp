#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,m;
   // freopen("input.txt","r",stdin);
    cin>>n>>m;
    cout<<n<<"+"<<m<<"="<<n+m<<endl;
    cout<<n<<"*"<<m<<"="<<n*m<<endl;
    cout<<n<<"-"<<m<<"="<<n-m<<endl;
    cout<<n<<"/"<<m<<"=";
    if(n<0)
        cout<<n/m-1<< "..."<<n%m+m<<endl; /** 當除數為負的，餘數需大於0，原先的負餘數需加上除數轉成正餘數
                                            ，多加一次餘數，所以商數必須多減一個**/
    else
        cout<<n/m<<"..."<<n%m<<endl;
    return 0;
}
