/*
Author:XH
Deacription:主函数main中输入一组（10个）C语言成绩值到数组score[ ]中，并输出如图所示的主菜单，根据不同的选择调用
Input:输入一组数（10个）成绩以及选择不同调用 
output:相应的输出 
*/
#include <stdio.h>
//输出平均成绩 
void ave(int score[],int num)
{
	int i,sum=0;
	for(i=0;i<num;i++){
		sum+=score[i];
	}
	printf("平均值为：%f\n",sum*1.0/num);
		
}
//成绩排序并输出 
void sort(int a[],int num)
{
	int i,j,k,max;
	printf("排序后：");
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
//输出比平均值低的成绩值，及个数
void lownum(int score[],int num)
{
	int i,sum=0,k=0;
	for(i=0;i<num;i++){
		sum+=score[i];
	}
	printf("平均值为：%f\n",sum*1.0/num);
	for(i=0;i<num;i++){
		if(score[i]<(sum*1.0/num))
		k+=1;
	}
	printf("比平均值低的个数为：%d\n",k);
}
//输出及格率
void upnum(int score[],int num)
{
	int i,k=0;
	for(i=0;i<num;i++){
		if(score[i]>=(60))
		k+=1;
	}
	printf("合格率为：%.3f%%\n",k*100.0/num);
}
//输入一个成绩值进行查找，输出找到或未找到。
void search(int score[],int num,int sc)
{
	int i,k=0;
	for(i=0;i<num;i++){
		if(score[i]==sc){
			k=1;	
		}
	}
	if(k==0){
		printf("未找到该成绩！\n");
	}else{
		printf("找到该成绩！\n");
	}
	
}
//排序后，输入一个成绩值，将其添加到score[ ]中并保持原来的顺序。
void addscore(int sco[],int num)
{
	int s;
	int i,pos,j;
	printf("请输入要添加的成绩;\n");
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
	printf("请输入10个学生成绩：\n");
	for(i=0;i<=9;i++){
		scanf("%d",&score[i]);
		num+=1;
	}
	while(1){
		//按照题意调用函数 
		printf("请输入选择的调用:\n1-输出平均值\n2-排序成绩\n3输出比平均值低的成绩和个数\n4-输出及格率\n5-查找成绩\n6-添加成绩\n0-结束程序\n");
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
			printf("请输入成绩：\n");
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


