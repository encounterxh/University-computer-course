/*
Author:XH
Deacription:��n��ѧ���ĳɼ���ͳ�Ƴ�����ƽ���ֵ�ѧ������
Input:�����м���ѧ������ɼ� 
output:����ƽ����������ƽ���� 
*/
#include <stdio.h>
int main (){
	//Step1:�������numΪѧ��������sumΪ�ܷ֣�kΪ����ƽ���ֵ����� 
	int num=0,sum=0,i,k=0;
	double ave;
	int a[100]; 
	//Step2:����ѧ������������� 
	printf("������ѧ���������������");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	//Step3:����ƽ��ֵ�͵���ƽ���ֵ����� 
	ave=sum/num;
	for(i=1;i<=num;i++){
		if(a[i]>ave){
			k+=1;
		}
	}
	//Step4���������ƽ���ֵ���������ƽ���� 
	printf("����ƽ���ֵ�ѧ������Ϊ%d�ˣ�ƽ����Ϊ%f",k,ave);
	return 0;
}
