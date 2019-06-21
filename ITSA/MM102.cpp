#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,x;
    int i;
    vector<int> a;
    //freopen("input.txt","r",stdin);
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),greater<int>());
    for(i=0;i<a.size();i++)
        cout<<i+1<<" "<<a[i]<<endl;
    return 0;
}
