#include<stdio.h>
int main()
{
	printf("������һ���ַ���\n");
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
	printf("һ����%d���ַ�\n",num-1);
	printf("һ����%d������\n",num);
	return 0;
}