/*
Author:XH
Deacription:分别统计一个文本文件中字母、数字及其它字符的个数
Input: 记事本文件中写入 
output:字母、数字及其它字符的个数
*/
#include <stdio.h>

int main()
{
	//定义文件指针 
	FILE *fp;
	char ch;
	int w=0,num=0,oth=0;
	//是否正常打开文件 
	if((fp=fopen("a.txt","r"))==NULL){
		printf("文件打开错误\n");
	}else{
		//逐字符读取 
		ch=fgetc(fp);
		while(!(feof(fp))){
			ch=fgetc(fp);
			if(ch>='0'&&ch<='9'){
				num+=1;
			}else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
				w+=1;
			}else{
				oth+=1;
			}
		}
	}
	//输出结果 
	printf("字母个数：%d\n数字个数：%d\n其他字符：%d\n",w,num,oth);
	return 0;
}
