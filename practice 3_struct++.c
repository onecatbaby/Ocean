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

	printf("������ѧ��������\n");
	printf("len = ");
	scanf("%d", &len);
	p = (struct Student *)malloc(len * sizeof(struct Student));
	
	for (i=0; i<len; i++)
	{
		printf("������� %d ��ѧ������Ϣ��\n", i+1);
		printf("name = ");
		scanf("%s", p[i].name);  //����ȡ��ַ����name��������������������ַ 
		
		printf("age =  ");
		scanf("%d", &p[i].age);
		
		printf("sex = ");
		scanf("%s", p[i].sex);
		
		printf("score = ");
		scanf("%f", &p[i].score);
		printf("\n");
	}
	
	for (i=0; i<len-1; i++)  //һ������һ�����ֱȽ����� 
	{
		for (j=0; j<len-1-i; j++)  //ÿ�����ֿ�ʼ�Ƚ� 
		{
			if (p[j].score < p[j+1].score)
			{
				k = p[j];  //�����в��ü� .score �������������ṹ�� �������ʾ�����ṹ���� score ���� 
				p[j] = p[j+1];
				p[j+1] = k;
			}
		}
	 } 

	printf("\n\nѧ����ϢΪ\n");
	for (i=0; i<len; i++)
	{
		printf("�� %d ��ѧ������Ϣ��\n", i+1);
		printf("name = %s \n", p[i].name);
		printf("age =  %d \n", p[i].age);
		printf("sex = %s \n", p[i].sex);
		printf("score = %f \n", p[i].score);
		printf("\n");
	}
	
	free(p);
	return 0;
 } 
