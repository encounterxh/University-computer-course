/*
Author:XH
Deacription:�ֱ�ͳ��һ���ı��ļ�����ĸ�����ּ������ַ��ĸ���
Input: ���±��ļ���д�� 
output:��ĸ�����ּ������ַ��ĸ���
*/
#include <stdio.h>

int main()
{
	//�����ļ�ָ�� 
	FILE *fp;
	char ch;
	int w=0,num=0,oth=0;
	//�Ƿ��������ļ� 
	if((fp=fopen("a.txt","r"))==NULL){
		printf("�ļ��򿪴���\n");
	}else{
		//���ַ���ȡ 
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
	//������ 
	printf("��ĸ������%d\n���ָ�����%d\n�����ַ���%d\n",w,num,oth);
	return 0;
}
