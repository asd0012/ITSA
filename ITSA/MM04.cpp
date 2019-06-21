#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
    int t;
    long long num,check;
    long long i,j;
   // freopen("input.txt","r",stdin);
    cin >> t;
    while(t--)
    {
        cin >> num;
        check = 1;
        for(i = 2; i*i <= num; i++) /** 只需找num的開根號 **/
        {
            if(i * i == num)    /** 如果為完全平方數 代表已達開根號的值，需跳出迴圈 **/
            {
                check = check + i;
                break;
            }
            if(num % i==0)
            {
                check+=i;
                check = check + (num/i); /** 加上因數的另一對，EX 6=2*3,i=2時 此時另一對為3 **/
            }
        }
        if(check == num)
            cout << "perfect\n";
        else
            cout << "nonperfect\n";
    }
    return 0;
}
