# include <stdio.h>
# include <stdlib.h> 

struct Student
{
	char name[5];
	int age;
	char sex[3];
	float score;
};

int main()
{
	int len;
	struct Student * p;
	int i, j;
	struct Student k;

	printf("请输入学生的人数\n");
	printf("len = ");
	scanf("%d", &len);
	p = (struct Student *)malloc(len * sizeof(struct Student));
	
	for (i=0; i<len; i++)
	{
		printf("请输入第 %d 个学生的信息：\n", i+1);
		printf("name = ");
		scanf("%s", p[i].name);  //无需取地址符，name本身就是数组名和数组地址 
		
		printf("age =  ");
		scanf("%d", &p[i].age);
		
		printf("sex = ");
		scanf("%s", p[i].sex);
		
		printf("score = ");
		scanf("%f", &p[i].score);
		printf("\n");
	}
	
	for (i=0; i<len-1; i++)  //一个数字一个数字比较着来 
	{
		for (j=0; j<len-1-i; j++)  //每个数字开始比较 
		{
			if (p[j].score < p[j+1].score)
			{
				k = p[j];  //这三行不用加 .score 交换的是整个结构体 若加则表示两个结构体内 score 互换 
				p[j] = p[j+1];
				p[j+1] = k;
			}
		}
	 } 

	printf("\n\n学生信息为\n");
	for (i=0; i<len; i++)
	{
		printf("第 %d 个学生的信息：\n", i+1);
		printf("name = %s \n", p[i].name);
		printf("age =  %d \n", p[i].age);
		printf("sex = %s \n", p[i].sex);
		printf("score = %f \n", p[i].score);
		printf("\n");
	}
	
	free(p);
	return 0;
 } 
