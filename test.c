#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[20]={0};    //shutdown -s -t 60
	system("shutdown -s -t 60");     //system()-执行系统命令
	again:
	printf("请注意，宝儿的电脑在一分钟内关机，如果输入：我爱你 就取消关机\n请输入：");
	scanf("%s",input);
	if(strcmp(input,"我爱你")==0)//比较两个字符串-strcmp
	{
	system("shutdown -a");
	}
	else
	{
	goto again;
	}
return 0;
}