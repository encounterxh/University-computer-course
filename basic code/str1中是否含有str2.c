/*
Author:XH
Deacription:�Ƚ������ַ����Ĵ�С�ͳ��� 
Input:�����ַ��� 
output:�ĸ������ĸ��� 
*/
#include <stdio.h>
#include <string.h>
int main()
{
	//Step1:�������a,b�����ȡ�����ַ��� 
	char a[40],b[40];
	int i,j,flag=0;
	//Step2:���������ַ��� 
	printf("�����������ַ���:"); 
	gets(a);
	gets(b);
	//Step3:�Ƚ�str1���Ƿ���str2 
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
	//Step3:������н�� 
	if(flag==0){
		printf("str1����str2");
	}else{
		printf("str1����str2");
	}
	return 0;
}