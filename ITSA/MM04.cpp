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
        for(i = 2; i*i <= num; i++) /** �u�ݧ�num���}�ڸ� **/
        {
            if(i * i == num)    /** �p�G����������� �N��w�F�}�ڸ����ȡA�ݸ��X�j�� **/
            {
                check = check + i;
                break;
            }
            if(num % i==0)
            {
                check+=i;
                check = check + (num/i); /** �[�W�]�ƪ��t�@��AEX 6=2*3,i=2�� ���ɥt�@�אּ3 **/
            }
        }
        if(check == num)
            cout << "perfect\n";
        else
            cout << "nonperfect\n";
    }
    return 0;
}
