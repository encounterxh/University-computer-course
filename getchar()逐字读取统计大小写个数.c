/*
Author:XH
Deacription:输入一个字符串，分别统计字符串中大写字母和小写字母的个数
Input:字符串 
output: 大小写字母个数 
*/
#include <stdio.h>
int main()
{
	char a,s[1000],i=0; 
 	int x,y; 
  	x=0; 
  	y=0; 
  	printf("请输入字符串：\n");
  	while(1){
		a = getchar();
		if(a=='\n')
			break;
	  	if(a>='A'&&a<='Z') 
			x++; 
		else if(a>='a'&&a<='z') 
            y++; 
		i++;
	  }
		
    printf("大写字母个数:%d 小写字母个数%d\n",x,y); 
	return 0;
}
