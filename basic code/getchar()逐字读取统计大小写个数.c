/*
Author:XH
Deacription:����һ���ַ������ֱ�ͳ���ַ����д�д��ĸ��Сд��ĸ�ĸ���
Input:�ַ��� 
output: ��Сд��ĸ���� 
*/
#include <stdio.h>
int main()
{
	char a,s[1000],i=0; 
 	int x,y; 
  	x=0; 
  	y=0; 
  	printf("�������ַ�����\n");
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
		
    printf("��д��ĸ����:%d Сд��ĸ����%d\n",x,y); 
	return 0;
}
