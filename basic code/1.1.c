#include <stdio.h>
void sort(int a[],int num)
{
	int i,j,k;
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(a[i]<a[j]){
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
}
int main()
{
	int i,num,score[1000]={89,89,67,89,67,89,78,67,90,100};
	num=10;
	sort(score[],num);
	for(i=0;i<num;i++){
		printf("%d",score[i]);
	}
}
