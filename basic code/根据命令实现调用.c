/*
Author:XH
Deacription:������main������һ�飨10����C���Գɼ�ֵ������score[ ]�У��������ͼ��ʾ�����˵������ݲ�ͬ��ѡ�����
Input:����һ������10�����ɼ��Լ�ѡ��ͬ���� 
output:��Ӧ����� 
*/
#include <stdio.h>
//���ƽ���ɼ� 
void ave(int score[],int num)
{
	int i,sum=0;
	for(i=0;i<num;i++){
		sum+=score[i];
	}
	printf("ƽ��ֵΪ��%f\n",sum*1.0/num);
		
}
//�ɼ�������� 
void sort(int a[],int num)
{
	int i,j,k,max;
	printf("�����");
	for(i=0;i<num;i++){
		max=i;
		for(j=i+1;j<num;j++){
			if(a[max]<a[j]){
				max=j;
			}
		}
	printf("%d ",a[max]);
	k=a[max];
	a[max]=a[i];
	a[i]=k;
	}
	printf("\n");
}
//�����ƽ��ֵ�͵ĳɼ�ֵ��������
void lownum(int score[],int num)
{
	int i,sum=0,k=0;
	for(i=0;i<num;i++){
		sum+=score[i];
	}
	printf("ƽ��ֵΪ��%f\n",sum*1.0/num);
	for(i=0;i<num;i++){
		if(score[i]<(sum*1.0/num))
		k+=1;
	}
	printf("��ƽ��ֵ�͵ĸ���Ϊ��%d\n",k);
}
//���������
void upnum(int score[],int num)
{
	int i,k=0;
	for(i=0;i<num;i++){
		if(score[i]>=(60))
		k+=1;
	}
	printf("�ϸ���Ϊ��%.3f%%\n",k*100.0/num);
}
//����һ���ɼ�ֵ���в��ң�����ҵ���δ�ҵ���
void search(int score[],int num,int sc)
{
	int i,k=0;
	for(i=0;i<num;i++){
		if(score[i]==sc){
			k=1;	
		}
	}
	if(k==0){
		printf("δ�ҵ��óɼ���\n");
	}else{
		printf("�ҵ��óɼ���\n");
	}
	
}
//���������һ���ɼ�ֵ��������ӵ�score[ ]�в�����ԭ����˳��
void addscore(int sco[],int num)
{
	int s;
	int i,pos,j;
	printf("������Ҫ��ӵĳɼ�;\n");
	scanf("%d",&s);
	sort(sco,num);
	for(i=0;i<num;i++){
		if(s>sco[i]){
			pos=i;
			break;
 		}
	}
	for(i=num-1;i>=pos;i--){
		sco[i+1]=sco[i];
	}
	sco[pos]=s;
	for(j=0;j<=(num);j++){
		printf("%d ",sco[j]);
	}
	printf("\n");
}  

int main()
{
	int i,score[1000],k,sum=0,num=0,sc;
	printf("������10��ѧ���ɼ���\n");
	for(i=0;i<=9;i++){
		scanf("%d",&score[i]);
		num+=1;
	}
	while(1){
		//����������ú��� 
		printf("������ѡ��ĵ���:\n1-���ƽ��ֵ\n2-����ɼ�\n3�����ƽ��ֵ�͵ĳɼ��͸���\n4-���������\n5-���ҳɼ�\n6-��ӳɼ�\n0-��������\n");
		scanf("%d",&k);
		if(k==1){
			ave(score,num);
		}
		else if(k==2){
			sort(score,num);
		}
		else if(k==3){
			lownum(score,num);
		}
		else if(k==4){
			upnum(score,num);
		}
		else if(k==5){
			printf("������ɼ���\n");
			scanf(" %d",&sc);
			search(score,num,sc);
		}
		else if(k==6){
			addscore(score,num);
			num+=1;
		}
		else if(k==0){
			break;
		}
	}
	return 0;
}


