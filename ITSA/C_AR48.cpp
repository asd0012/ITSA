#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int value;
    int num[4];
    freopen("input.txt","r",stdin);
    int i;
    cin>>value;
    for(i=3;i>=0;i--)
    {
        num[i]=value%10;
        num[i]=(num[i]+7)%10;   /** �̷ӵ��w�������ഫ**/
        value/=10;  /** ���ܤW�@���**/
    }
    swap(&num[0],&num[2]);  /** �Ĥ@��Ƹ�ĤT��ƥ洫 **/
    swap(&num[1],&num[3]);  /** �ĤG��Ƹ�ĥ|��ƥ洫 **/
    for(i=0;i<4;i++)
        cout<<num[i];
    cout<<endl;
    return 0;
}

