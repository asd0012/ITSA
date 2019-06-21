#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int row,col;
    int matrix[100][100];
    int i,j;
    //freopen("input.txt","r",stdin);
    cin>>row>>col;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            cin>>matrix[i][j];
    for(i=0;i<col;i++)
    {
        for(j=0;j<row-1;j++)
            cout<<matrix[j][i]<<" "; /** j代表row，轉至方式為從row開始由上往下輸出**/
            cout<<matrix[j][i]<<endl;
    }
    return 0;
}

