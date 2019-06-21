#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector <int> arr)
{
    int i,j,minn;
    for(i=0;i<arr.size()-1;i++)
    {
        minn=i;
        for(j=i+1;j<arr.size();j++)
            if(arr[j]<arr[minn])
                minn=j;
        swap(arr[minn],arr[i]);
    }
    for(i=0;i<arr.size()-1;i++)
        cout<<arr[i]<<" ";
    cout<<arr[arr.size()-1]<<endl;
    return ;
}

int main()
{
    int t,n;
    vector <int> num;
    //freopen("input.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        cin>>n;
        num.push_back(n);
    }
    selection_sort(num);
    return 0;
}
