/*
	�� 1 �� ĳ���� ֮������� 
*/ 

# include <stdio.h>
# include <stdbool.h>  //ʹ�� bool ����  ����ֵΪ true �� false 

bool fun_1(int x)  //�ж����� 
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
	
	printf("������һ����������\n"); 
	scanf("%d", &a);
	fun_2(a);   
	
	return 0;
}
