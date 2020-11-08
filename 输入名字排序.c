#include <stdio.h>
#include <string.h>
main()
{
	char a[5][10],t[10];
	int i,j;
	for(i=0;i<5;i++)
	{
	printf("请输入第%d个同学名字:",i+1);
	gets(a[i]);
	}
	for(i=1;i<5;i++){
		for(j=0;j<5-i;j++)
		if(strcmp(a[j],a[j+1])>0)
		{
		strcpy(t,a[j]);
		strcpy(a[j],a[j+1]);
		strcpy(a[j+1],t);
		}
	}
	
	for(i=0;i<5;i++)
	printf("%s ",a[i]);
}