#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[20]={0};    //shutdown -s -t 60
	system("shutdown -s -t 60");     //system()-ִ��ϵͳ����
	again:
	printf("��ע�⣬�����ĵ�����һ�����ڹػ���������룺�Ұ��� ��ȡ���ػ�\n�����룺");
	scanf("%s",input);
	if(strcmp(input,"�Ұ���")==0)//�Ƚ������ַ���-strcmp
	{
	system("shutdown -a");
	}
	else
	{
	goto again;
	}
return 0;
}