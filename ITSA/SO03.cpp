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
        while(s<n)/** s為士兵數，最多比完全部士兵**/
        {
            if(a[e]>=b[s]) /**a為敵人，b為士兵，敵人攻擊大於等於士兵，則士兵被殺死 **/
                s++;
            else    /** 士兵攻擊較高，則贏一場 **/
                s++,e++,win++;
        }
        cout<<win<<endl;
        a.clear();
        b.clear();
    }
}
