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
        cout<<n/m-1<< "..."<<n%m+m<<endl; /** ���Ƭ��t���A�l�ƻݤj��0�A������t�l�ƻݥ[�W�����ন���l��
                                            �A�h�[�@���l�ơA�ҥH�Ӽƥ����h��@��**/
    else
        cout<<n/m<<"..."<<n%m<<endl;
    return 0;
}
