/*
Author:XH
Deacription:从n个学生的成绩中统计出低于平均分的学生人数
Input:输入有几个学生及其成绩 
output:低于平均分人数及平均分 
*/
#include <stdio.h>
int main (){
	//Step1:定义变量num为学生人数，sum为总分，k为低于平均分的人数 
	int num=0,sum=0,i,k=0;
	double ave;
	int a[100]; 
	//Step2:输入学生人数及其分数 
	printf("请输入学生人数及其分数：");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	//Step3:计算平均值和低于平均分的人数 
	ave=sum/num;
	for(i=1;i<=num;i++){
		if(a[i]>ave){
			k+=1;
		}
	}
	//Step4；输出低于平均分的人数及其平均分 
	printf("低于平均分的学生人数为%d人，平均分为%f",k,ave);
	return 0;
}
