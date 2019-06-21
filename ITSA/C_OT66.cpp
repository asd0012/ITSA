#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,num;
    int i;
    vector<int> gr;
   // freopen("input.txt","r",stdin);
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        gr.push_back(num);
    }
    sort(gr.begin(),gr.end());
    cout<<gr[gr.size()-1]<<endl;
    return 0;
}
