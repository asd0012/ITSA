#include<stdio.h>
#include<iostream>
using namespace std;

int main(void)
{
    int bus[25]={0}; /** 結束時間不超過24 **/
    int i;
    int maxx=0,n;
    int s,d;
   // freopen("input.txt","r",stdin);
    cin>>n; /** n筆訂單 **/
    while(n--)
    {
        cin>>s>>d;  /** 開始與結束的時間 **/
        for(i=s;i<d;i++)    /** 開始到結束這段時間，派一台車**/
            bus[i]++;
    }
    for(i=0;i<25;i++)
        if(maxx<bus[i]) /** 找出哪個時段得派最多車，即為最少需派車的數量 **/
            maxx=bus[i];
    cout<<maxx<<endl;
    return 0;
}
