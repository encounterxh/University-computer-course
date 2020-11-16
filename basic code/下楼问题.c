/*
Author:XH
Deacription:递归函数：从楼下走上楼共有h 个台阶，每一步有2种走法：一步走1个台阶或一步走2个台阶；输入台阶数h，输出共有多少种走法；
Input:输入总台阶个数 
output:总共有多少走法 
*/
#include<stdio.h>
 int num=0; //记录方案种数
 void dfs(int n)
 {
 	int  i;
     for(i=2;i>0;i--) //每次所走台阶数
     {
        if(n<i) continue; //当剩余台阶数小于当前要走台阶数时，结束当次循环
        else
        {
            if(n==i) num++; //当剩余台阶数等于当前要走台阶数时，满足条件，加1
            else
                dfs(n-i);
        }
     }
 }
 int main()
 {
     int n;
     scanf("%d",&n);
     dfs(n);
     printf("%d\n",num);
     return 0;
 }
 