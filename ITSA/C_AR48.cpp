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
        num[i]=(num[i]+7)%10;   /** 依照給定的公式轉換**/
        value/=10;  /** 移至上一位數**/
    }
    swap(&num[0],&num[2]);  /** 第一位數跟第三位數交換 **/
    swap(&num[1],&num[3]);  /** 第二位數跟第四位數交換 **/
    for(i=0;i<4;i++)
        cout<<num[i];
    cout<<endl;
    return 0;
}

