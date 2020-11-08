/*
Author:XH
Deacription:完成"图书馆信息管理系统"中的数据分析，定义所需主要数据结构。
Input: 增查改删数据 
output:最终的数据 
*/
#include <stdio.h>
#include <string.h>
struct lib{
	char name[20];//书名 
	char data[10];//出版时间 
	char isbn[20];//ISBN
}li[]={"高等数学","20190206","123456"};
//增加
int add(int sum)
{
	printf("请输入书名，出版时间,ISBN：\n");
	scanf("%s %s %s",li[sum].name,li[sum].data,li[sum].isbn);
	return sum+=1;
}
//查询 
int search(sum)
{
	//k为查询方式，n判断是否找到书 
	int k,i,n;
	char con[100];
	printf("-------------操作选项-----------\n");
  	printf("1:按书名查询 \n");
  	printf("2:按日期查询 \n");
  	printf("3:按ISBN查询 \n");
  	printf("--------------------------------\n");
  	printf("请输入查询方式1或2或3，及其内容:\n");
  	scanf(" %d %s",&k,&con);
 	n=-1;
	switch(k){
		case 1:
		for(i=0;i<sum;i++){
			if(strcmp(li[i].name,con)==0){
				printf("名称：%s\n日期：%s\nISBN：%s\n",li[i].name,li[i].data,li[i].isbn);
				n=i;
			}
		}
		break;
		case 2:
		for(i=0;i<sum;i++){
			if(strcmp(li[i].data,con==0)){
				printf("名称：%s\n日期：%s\nISBN：%s\n",li[i].name,li[i].data,li[i].isbn);
				n=i;
			}
		}
		break;
		case 3:
		for(i=0;i<sum;i++){
			if(strcmp(li[i].isbn,con)==0){
				printf("名称：%s\n日期：%s\nISBN：%s\n",li[i].name,li[i].data,li[i].isbn);
				n=i;
			}
		}
		break;
	}
	if(n==-1)printf("未找到此书！\n");
	return n;
}
//更改数据 
void rev(int sum)
{
	int i;
	printf("查询是否含有该书籍\n");
	i=search(sum);
	if(i!=-1){
		printf("请输入更新后的数据：(书名，出版时间，ISBN)\n");
		scanf(" %s %s %s",li[i].name,li[i].data,li[i].isbn);
	}
	printf("%s\t%s\t%s\t\n修改成功!\n",li[i].name,li[i].data,li[i].isbn);
}
//删除数据 
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
	//选择操作 
	while(1){
		printf("-------------操作选项-----------\n");
	  	printf("1:增加书目 \n");
	  	printf("2:查询书目 \n");
	  	printf("3:修改书目 \n");
	 	printf("4:删除书目 \n");
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
	  	//是否继续 
	  	printf("是否继续操作Y或N\n");
	  	scanf(" %c",&d);
	  	//注意变量为字符不是字符串 
	  	if(d=='Y'){
	  		continue;
	  	}else if(d=='N'){
	  		return 0;
	  	}
	}
	return 0;
}