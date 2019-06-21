#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long num,rec,div;
    div=2;
   // freopen("input.txt","r",stdin);
    cin>>num;
    while(num>1)
    {
        rec=0;
        if(num%div==0)
        {
            cout<<div;
            num/=div;
            rec++;
            while(num%div==0)
            {
                rec++;
                num/=div;
            }
            if(rec>=1)
                cout<<"^"<<rec;
            if(num != 1)
                cout<<" x ";
        }
        div++;
    }
    cout<<endl;
    return 0;
}
