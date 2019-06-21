#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int times=0;
    int i,j;
    string str1,str2,check;
  //  freopen("input.txt","r",stdin);
    while(cin >> str1 >>str2)
    {
        times = 0;
        for(i = 0;i < 6;i++)
        {
            check = check.assign(str2,i,2); /** assign,str2的兩個字元給check，i的值使str2往下移**/
            if(check == str1)
                times++;
        }
        cout << times <<endl;
    }
    return 0;
}
