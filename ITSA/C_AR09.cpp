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
        sort(a.begin(),a.end()); /** �Ѥp��j�Ƨ� **/
        for(i=0;i<a.size();i++)
        {
            maxx*=10;
            minn*=10;
            maxx+=a[a.size()-i-1]; /** �q�̤j�~�}�l�[�X�̤j�� (�k�쥪) **/
            minn+=a[i]; /** �q�̤p�}�l�[�X�̤p��(����k) **/
        }
        cout<<maxx-minn<<endl;
    }
    return 0;
}
