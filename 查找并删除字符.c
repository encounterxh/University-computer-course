/*
Author:XH
Deacription:����һ���ַ������ֱ�ͳ���ַ����д�д��ĸ��Сд��ĸ�ĸ�����һ���ַ������ڴ��в��Ҳ�ɾ�����ַ���
Input:����һ���ַ�
output: �����ַ��� 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	//Step1:�������aΪ�����ֵ,b�ж��Ƿ�ɾ�� 
    int i;
    char s[1000],a,b;
    //Step2:�����ַ���
    printf("�����ַ�����");
    gets(s);
    printf("����Ҫɾ�����ַ���");
    scanf("%c",&a);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==a)
        {
        	//Step3:������ҵ��ַ� 
            printf("�ҵ����ַ���Ҫɾ��������Yɾ����");
            scanf(" %c",&b);
            //Step4:���ѡ��ɾ�������� 
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