#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int win=0,s=0,e=0,n,x;
    int i;
    vector <int> a,b;
  //  freopen("input.txt","r",stdin);
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        win=0,s=e=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        for(i=0;i<n;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        sort(b.begin(),b.end());
        while(s<n)/** s���h�L�ơA�̦h�񧹥����h�L**/
        {
            if(a[e]>=b[s]) /**a���ĤH�Ab���h�L�A�ĤH�����j�󵥩�h�L�A�h�h�L�Q���� **/
                s++;
            else    /** �h�L���������A�hĹ�@�� **/
                s++,e++,win++;
        }
        cout<<win<<endl;
        a.clear();
        b.clear();
    }
}
