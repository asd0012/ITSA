#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
    char str[100];
    vector<int> num;
    int i;
   // freopen("input.txt","r",stdin);
    while(fgets(str,100,stdin) !=NULL)
    {
        char *token;
        token=strtok(str," ");  /** �Htoken���ť� **/
        while(token != NULL)
        {
            num.push_back(atoi(token));   /** �N�r����ASCII���নINT **/
            token=strtok(NULL," "); /** ���U�@�q�ť� **/
        }
        for(i=num.size()-1;i>0;i--)  /** ��X���൲�G **/
            cout<<num[i]<<" ";
            cout<<num[0];
            cout<<endl;
        num.clear();
    }
    return 0;
}

