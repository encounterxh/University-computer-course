/*
Author:XH
Deacription:某班有5个学生，学生信息包括学号、姓名及三门课程成绩
input: 学生的成绩 
output: 平均分，两门以上不及格的学生学号及成绩，80~90的学生 
*/
#include <stdio.h>
//储存学生基本信息 
struct StudentInfo {
    char na[10];
    char id[20];
    float sub1;
    float sub2;
    float sub3;
    float ave;
    int num;
}student[] = { { "张三","2019020235" },{ "李四","2019020236" },{ "王五","2019020237" },{ "李留","2019020238" },{ "王空","2019020239" } };
//返回平均值 
float ave(float a,float b,float c)
{
	return (a+b+c)/3;
}
//寻找两门以上不及格的学生 
void find1()
{
	int i,j=0; 
	for(i=0;i<5;i++){
		if(student[i].num>=2){
			j+=1;
		}
	}
	if(j!=0){
		printf("有两门以上不及格的学生学号及其不及格成绩：\n");
		for(i=0;i<5;i++){
			if(student[i].num>=2){
				printf("%s：\t",student[i].id);
				if(student[i].sub1<60)printf("%2f\t",student[i].sub1);
				if(student[i].sub2<60)printf("%2f\t",student[i].sub2);
				if(student[i].sub3<60)printf("%2f\t",student[i].sub3);
				printf("\n"); 
			}
		}
	}else{
		printf("没有两门以上不及格的学生!\n"); 
	}
	
}
//寻找80~90分的学生 
void find2()
{
	int i,j=0;
	for(i=0;i<5;i++){
		if(student[i].ave>=80&&student[i].ave<=90){
			j+=1;;
		}
	}
	if(j!=0){
		printf("平均分在80~90分的学生为：\n");
		for(i=0;i<5;i++){
			if(student[i].ave>=80&&student[i].ave<=90){
				printf("%s\t%s\t",student[i].id,student[i].na);
			}
		}	
	}else{
		printf("没有平均分在80~90的学生!\n");
	}
}

int main()
{
	int i,k;
	//输入学生成绩并计算不及格成绩数 
	printf("请输入学生成绩:\n");
	for(i=0;i<5;i++){
		k=0;
		printf("%s",student[i].na);
		scanf("%f %f %f",&student[i].sub1,&student[i].sub2,&student[i].sub3);
		if(student[i].sub1<60)k+=1;
		if(student[i].sub2<60)k+=1;
		if(student[i].sub3<60)k+=1;
		student[i].num=k;
	}
	//计算学生三门课的平均成绩
	printf("每个学生的平均成绩为：\n"); 
	for(i=0;i<5;i++){
		student[i].ave=ave(student[i].sub1,student[i].sub2,student[i].sub3);
		printf("%s\t:%.2f\t\n",student[i].na,student[i].ave);
	}
	//找出两门以上不及格的学生输出学号和不及格成绩 
	find1(student);
	//寻找80~90分的学生 
	find2(student);
	return 0;
}

