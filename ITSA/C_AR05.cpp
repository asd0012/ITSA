#include<stdio.h>
#include<iostream>
using namespace std;

int main(void)
{
    int bus[25]={0}; /** �����ɶ����W�L24 **/
    int i;
    int maxx=0,n;
    int s,d;
   // freopen("input.txt","r",stdin);
    cin>>n; /** n���q�� **/
    while(n--)
    {
        cin>>s>>d;  /** �}�l�P�������ɶ� **/
        for(i=s;i<d;i++)    /** �}�l�쵲���o�q�ɶ��A���@�x��**/
            bus[i]++;
    }
    for(i=0;i<25;i++)
        if(maxx<bus[i]) /** ��X���Ӯɬq�o���̦h���A�Y���ֻ̤ݬ������ƶq **/
            maxx=bus[i];
    cout<<maxx<<endl;
    return 0;
}
