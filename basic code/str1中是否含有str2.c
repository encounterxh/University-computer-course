/*
Author:XH
Deacription:比较两个字符串的大小和长度 
Input:两个字符串 
output:哪个长，哪个大 
*/
#include <stdio.h>
#include <string.h>
int main()
{
	//Step1:定义变量a,b数组读取两个字符串 
	char a[40],b[40];
	int i,j,flag=0;
	//Step2:输入两个字符串 
	printf("请输入两个字符串:"); 
	gets(a);
	gets(b);
	//Step3:比较str1中是否有str2 
	for(i=0;i<strlen(a);i++){
		if(a[i]==b[0]&&i+strlen(b)<=strlen(a)){
			for(j=0;j<strlen(b);j++){
				flag=1;
				if(a[i+j]!=b[j]){
					flag=0;
					break;
				}
			}
		}
	}
	//Step3:输出运行结果 
	if(flag==0){
		printf("str1中无str2");
	}else{
		printf("str1中有str2");
	}
	return 0;
}