/*
Author:XH
Deacription:ĳ����5��ѧ����ѧ����Ϣ����ѧ�š����������ſγ̳ɼ�
input: ѧ���ĳɼ� 
output: ƽ���֣��������ϲ������ѧ��ѧ�ż��ɼ���80~90��ѧ�� 
*/
#include <stdio.h>
//����ѧ��������Ϣ 
struct StudentInfo {
    char na[10];
    char id[20];
    float sub1;
    float sub2;
    float sub3;
    float ave;
    int num;
}student[] = { { "����","2019020235" },{ "����","2019020236" },{ "����","2019020237" },{ "����","2019020238" },{ "����","2019020239" } };
//����ƽ��ֵ 
float ave(float a,float b,float c)
{
	return (a+b+c)/3;
}
//Ѱ���������ϲ������ѧ�� 
void find1()
{
	int i,j=0; 
	for(i=0;i<5;i++){
		if(student[i].num>=2){
			j+=1;
		}
	}
	if(j!=0){
		printf("���������ϲ������ѧ��ѧ�ż��䲻����ɼ���\n");
		for(i=0;i<5;i++){
			if(student[i].num>=2){
				printf("%s��\t",student[i].id);
				if(student[i].sub1<60)printf("%2f\t",student[i].sub1);
				if(student[i].sub2<60)printf("%2f\t",student[i].sub2);
				if(student[i].sub3<60)printf("%2f\t",student[i].sub3);
				printf("\n"); 
			}
		}
	}else{
		printf("û���������ϲ������ѧ��!\n"); 
	}
	
}
//Ѱ��80~90�ֵ�ѧ�� 
void find2()
{
	int i,j=0;
	for(i=0;i<5;i++){
		if(student[i].ave>=80&&student[i].ave<=90){
			j+=1;;
		}
	}
	if(j!=0){
		printf("ƽ������80~90�ֵ�ѧ��Ϊ��\n");
		for(i=0;i<5;i++){
			if(student[i].ave>=80&&student[i].ave<=90){
				printf("%s\t%s\t",student[i].id,student[i].na);
			}
		}	
	}else{
		printf("û��ƽ������80~90��ѧ��!\n");
	}
}

int main()
{
	int i,k;
	//����ѧ���ɼ������㲻����ɼ��� 
	printf("������ѧ���ɼ�:\n");
	for(i=0;i<5;i++){
		k=0;
		printf("%s",student[i].na);
		scanf("%f %f %f",&student[i].sub1,&student[i].sub2,&student[i].sub3);
		if(student[i].sub1<60)k+=1;
		if(student[i].sub2<60)k+=1;
		if(student[i].sub3<60)k+=1;
		student[i].num=k;
	}
	//����ѧ�����ſε�ƽ���ɼ�
	printf("ÿ��ѧ����ƽ���ɼ�Ϊ��\n"); 
	for(i=0;i<5;i++){
		student[i].ave=ave(student[i].sub1,student[i].sub2,student[i].sub3);
		printf("%s\t:%.2f\t\n",student[i].na,student[i].ave);
	}
	//�ҳ��������ϲ������ѧ�����ѧ�źͲ�����ɼ� 
	find1(student);
	//Ѱ��80~90�ֵ�ѧ�� 
	find2(student);
	return 0;
}

