#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int x,t;
    int num;
    int i,j;
    int w_a,w_b;
    vector <int> a,b;
   // freopen("input.txt","r",stdin);
    cin>>t;
    while(t--)
    {
       cin>>num;
       w_a=0,w_b=0;
       for(i=0;i<num;i++)
       {
           cin>>x;
           a.push_back(x);
       }
       sort(a.begin(),a.end(),greater<int>());
       for(i=0;i<num;i++)
       {
           cin>>x;
           b.push_back(x);
       }
        sort(b.begin(),b.end());
        for(i=0;i<num;i++)
        {
            if(a[i]>b[i])
                w_a++;
            else if(b[i]>a[i])
                w_b++;
        }
        cout<<w_a<<" "<<w_b<<endl;
        a.clear();
        b.clear();
    }
    return 0;
}
