#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    char str[100];
    char *token;
    int maxx=0,minn=0;
    vector <int> a;
    int i;
   // freopen("input.txt","r",stdin);
    while(fgets(str,100,stdin)!= NULL)
    {
        token=strtok(str,",");
        while(token!=NULL)
        {
            a.push_back(atoi(token));
            token=strtok(NULL,",");
        }
        sort(a.begin(),a.end()); /** 由小到大排序 **/
        for(i=0;i<a.size();i++)
        {
            maxx*=10;
            minn*=10;
            maxx+=a[a.size()-i-1]; /** 從最大才開始加出最大值 (右到左) **/
            minn+=a[i]; /** 從最小開始加出最小值(左到右) **/
        }
        cout<<maxx-minn<<endl;
    }
    return 0;
}
