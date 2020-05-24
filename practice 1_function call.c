/*
	求 1 到 某个数 之间的素数 
*/ 

# include <stdio.h>
# include <stdbool.h>  //使用 bool 函数  返回值为 true 和 false 

bool fun_1(int x)  //判断素数 
{
	int i;
		
	for (i=2; i<x; i++)
	{	
		if (x%i == 0)
			break;
	}
	
	if (i == x)
		return true;
	else 
		return false;
}

int fun_2(int y)
{
	int i;
	
	for (i=2; i<y; i++)
	{
		if (fun_1(i))
			printf("%d ", i);
	}
}

int main()
{
	int a;
	
	printf("请输入一个正整数：\n"); 
	scanf("%d", &a);
	fun_2(a);   
	
	return 0;
}
