#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int sum=0,value,cube=1;
    int i=0;
    vector <int> num;
   // freopen("input.txt","r",stdin);
    for(i=0;i<6;i++)
    {
        cin>>value;
        num.push_back(value);
    }
    while(num.size())
    {
        for(i=0;i<3;i++)
            cube*=num.back(); /** 回傳vector的最後一個值 **/
        sum+=cube;
        cube=1,num.pop_back(); /** 刪掉vector的最後一個值 **/
    }
    cout<<sum<<endl;
    return 0;
}
