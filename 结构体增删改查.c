/*
Author:XH
Deacription:���"ͼ�����Ϣ����ϵͳ"�е����ݷ���������������Ҫ���ݽṹ��
Input: �����ɾ���� 
output:���յ����� 
*/
#include <stdio.h>
#include <string.h>
struct lib{
	char name[20];//���� 
	char data[10];//����ʱ�� 
	char isbn[20];//ISBN
}li[]={"�ߵ���ѧ","20190206","123456"};
//����
int add(int sum)
{
	printf("����������������ʱ��,ISBN��\n");
	scanf("%s %s %s",li[sum].name,li[sum].data,li[sum].isbn);
	return sum+=1;
}
//��ѯ 
int search(sum)
{
	//kΪ��ѯ��ʽ��n�ж��Ƿ��ҵ��� 
	int k,i,n;
	char con[100];
	printf("-------------����ѡ��-----------\n");
  	printf("1:��������ѯ \n");
  	printf("2:�����ڲ�ѯ \n");
  	printf("3:��ISBN��ѯ \n");
  	printf("--------------------------------\n");
  	printf("�������ѯ��ʽ1��2��3����������:\n");
  	scanf(" %d %s",&k,&con);
 	n=-1;
	switch(k){
		case 1:
		for(i=0;i<sum;i++){
			if(strcmp(li[i].name,con)==0){
				printf("���ƣ�%s\n���ڣ�%s\nISBN��%s\n",li[i].name,li[i].data,li[i].isbn);
				n=i;
			}
		}
		break;
		case 2:
		for(i=0;i<sum;i++){
			if(strcmp(li[i].data,con==0)){
				printf("���ƣ�%s\n���ڣ�%s\nISBN��%s\n",li[i].name,li[i].data,li[i].isbn);
				n=i;
			}
		}
		break;
		case 3:
		for(i=0;i<sum;i++){
			if(strcmp(li[i].isbn,con)==0){
				printf("���ƣ�%s\n���ڣ�%s\nISBN��%s\n",li[i].name,li[i].data,li[i].isbn);
				n=i;
			}
		}
		break;
	}
	if(n==-1)printf("δ�ҵ����飡\n");
	return n;
}
//�������� 
void rev(int sum)
{
	int i;
	printf("��ѯ�Ƿ��и��鼮\n");
	i=search(sum);
	if(i!=-1){
		printf("��������º�����ݣ�(����������ʱ�䣬ISBN)\n");
		scanf(" %s %s %s",li[i].name,li[i].data,li[i].isbn);
	}
	printf("%s\t%s\t%s\t\n�޸ĳɹ�!\n",li[i].name,li[i].data,li[i].isbn);
}
//ɾ������ 
void del(int sum)
{
	int i,j;
	i=search(sum);
	if(i!=-1){
		for(j=i+1;j<sum;j++){
			li[j-1]=li[j];
		}
	} 
}

int main()
{
	int sum=1,k;
	char d;
	//ѡ����� 
	while(1){
		printf("-------------����ѡ��-----------\n");
	  	printf("1:������Ŀ \n");
	  	printf("2:��ѯ��Ŀ \n");
	  	printf("3:�޸���Ŀ \n");
	 	printf("4:ɾ����Ŀ \n");
	  	printf("--------------------------------\n");
	  	scanf("%d",&k);
	  	getchar();
	  	switch(k){
	  		case 1:
	  		sum=add(sum);
	  		break;
	  		case 2:
	  		search(sum);
	  		break;
	  		case 3:
	  		rev(sum);
	  		break;
	  		case 4:
	  		del(sum);
	  		break;
	  	}
	  	//�Ƿ���� 
	  	printf("�Ƿ��������Y��N\n");
	  	scanf(" %c",&d);
	  	//ע�����Ϊ�ַ������ַ��� 
	  	if(d=='Y'){
	  		continue;
	  	}else if(d=='N'){
	  		return 0;
	  	}
	}
	return 0;
}