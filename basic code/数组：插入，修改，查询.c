/*
Author:XH
Deacription:随意输入一个实型数组，再对其实现：（1）添加――即输入要添加的元素值，输入添加的位置下标，把数据添加到相应元素；（2）修改――即输入要修改的元素下标，输入新的值，更改指定元素值；（3）查找――即输入20,查找数组中是否有此数，并输出查找结果；
Input:输入一个实型数组;操作类型;查找的数及其位置或者查找的数值 
output:反馈结果 
*/
#include <stdio.h>
int main (){
	//Step1:定义变量a为输入的数组；b为更改的数值;c为数组位置；flag判断查找的数是否存在； d判断是否继续下一次操作；k判断操作类型 
	int a[100],i=1,b,c,n,flag=0;
	char k,d='y';
	//Step2:输入数的个数及其值 
	printf("输入几个数？",&n);
	scanf("%d",&n);
	printf("请输入一个实数型数组：\n");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(d=='y'){
		//Step3:输入进行的操作方式 
		printf("请输入执行方式（添加为t；修改为x；查找为c）：");
		scanf("%s",&k);
		//Step4:进行三种方式的操作 
		if(k=='t'){
			printf("请输入要添加的元素值及其下标：");
			scanf("%d %d",&b,&c);
			for(i=n;i>=c;i--){
				a[i+1]=a[i];
			}
			a[c]=b;
			n+=1;
		}
		if(k=='x'){
			printf("请输入要修改的元素值及其下标：");
			scanf("%d %d",&b,&c);
			a[c]=b;
		}
		if(k=='c'){
			printf("请输入要查询的元素值：");
			scanf("%d",&b);
			for(i=1;i<=n;i++){
				if(a[i]==b){
					flag=1;
				}
			}
			if(flag==0){
				printf("无此数\n");
			}else{
				printf("有此数\n");
			}
		}
		//Step5:判断是否继续进行操作 
		printf("是否继续操作：（输入y or n）：");
		scanf("%s",&d);
	}
	//Step6:输出最终数组的值 
	for(i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
