#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	//���ڴ�����10�����εĿռ�
	int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		//��ӡ����ԭ��
		printf("%s\n",strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0;i < 10;i++)
		{
			*(p + i) = i;
		}
		for (i = 0;i < 10;i++)
		{
			printf("%d ",*(p+i));
		}
	}
	free(p);
	return 0;
} 