/*
Author:XH
Deacription:输入一个字符串，分别统计字符串中大写字母和小写字母的个数入一个字符串，在串中查找并删除该字符；
Input:输入一个字符
output: 最终字符串 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	//Step1:定义变量a为输入的值,b判断是否删除 
    int i;
    char s[1000],a,b;
    //Step2:输入字符串
    printf("输入字符串：");
    gets(s);
    printf("输入要删除的字符：");
    scanf("%c",&a);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==a)
        {
        	//Step3:输入查找的字符 
            printf("找到此字符，要删除吗？输入Y删除：");
            scanf(" %c",&b);
            //Step4:如果选择删除输出结果 
            if(b=='Y')
            {
                for(i=0;i<strlen(s);i++)
                {
                    if(s[i]!=a)
                       printf("%c",s[i]);
                    else
                       continue;
                }
                printf("\n");
            }
        }
    }
    return 0;
}