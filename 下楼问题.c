/*
Author:XH
Deacription:�ݹ麯������¥������¥����h ��̨�ף�ÿһ����2���߷���һ����1��̨�׻�һ����2��̨�ף�����̨����h��������ж������߷���
Input:������̨�׸��� 
output:�ܹ��ж����߷� 
*/
#include<stdio.h>
 int num=0; //��¼��������
 void dfs(int n)
 {
 	int  i;
     for(i=2;i>0;i--) //ÿ������̨����
     {
        if(n<i) continue; //��ʣ��̨����С�ڵ�ǰҪ��̨����ʱ����������ѭ��
        else
        {
            if(n==i) num++; //��ʣ��̨�������ڵ�ǰҪ��̨����ʱ��������������1
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
 