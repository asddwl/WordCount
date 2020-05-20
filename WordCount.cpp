#include<stdio.h>
int main()
{
	printf("请输入一行字符：\n");
	char ah;
	int i,num=0,word=0;
	while((ah=getchar())!='\n')
		if(ah==' '||ah==',')
			word=0;
		else if(word==0)
		{
			word=1;
			num++;
		}
	printf("一共有%d个字符\n",num-1);
	printf("一共有%d个单词\n",num);
	return 0;
}