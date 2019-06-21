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
        token=strtok(str," ");  /** 以token切空白 **/
        while(token != NULL)
        {
            num.push_back(atoi(token));   /** 將字元的ASCII值轉成INT **/
            token=strtok(NULL," "); /** 切下一段空白 **/
        }
        for(i=num.size()-1;i>0;i--)  /** 輸出倒轉結果 **/
            cout<<num[i]<<" ";
            cout<<num[0];
            cout<<endl;
        num.clear();
    }
    return 0;
}

