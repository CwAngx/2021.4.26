#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		//打印错误原因
		printf("%s\n",strerror(errno));
	}
	else
	{
		//正常使用空间
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
} //学习数据结构之前需要掌握 开拓内存空间
