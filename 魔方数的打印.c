/*
Author:XH
Deacription:输出一个n(小于10的奇数)，输出n阶魔方阵，此阵中每一行之和、每一列之和、对角线之和均相等。
Input: 数字n小于10的奇数 
output:满足条件矩阵 
*/
#include <stdio.h>
int main()
{
	int a[15][15],i,j,k,p,n;
	//Step1:输入一个数满足不等于零，小于10且是奇数 
	p=1;
	while(p==1)
	{
		printf("输入一个数:");
		scanf("%d",&n);
		if ((n!=0) && (n<=10) && (n%2!=0))
		p=0;
	}
	//Step2:赋值矩阵各位置数为零 
	for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
	a[i][j]=0;
	//Step3:按照规律将“1”放在第一行，中间一列
	j=n/2+1;
	a[1][j]=1;
	for (k=2;k<=n*n;k++)
	{
		i=i-1;
		j=j+1;
		//Step4:判断是否为特殊情况下的变换 
		if ((i<1) && (j>n))
		{
			i=i+2;
			j=j-1;
		}
		else
		{
			//Step5:当一个数行为1，下一个数行为N;当一个数列数为N,下一个数列数为1，行数减1；
			if (i<1) i=n;
			if (j>n) j=1;
		}
		//Step6:一般情况下行列变换 
		if (a[i][j]==0)
			a[i][j]=k;
		else
		{
			i=i+2;
			j=j-1;
			a[i][j]=k;
		}
	}
	//Step:输出 
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}