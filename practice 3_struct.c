# include <stdio.h>
# include <string.h>

struct Student
{
	char name[10];
	int age;
	char sex[3];
};

void InputStudent(struct Student * p)
{
	p->age = 18;  // �ȼ��� (*p).age 
	strcpy(p->name, "ɽ����");
	strcpy(p->sex, "Ů");
} 

void OutputStudent(struct Student * o)
{
	printf("%s %d %s", o->name ,o->age ,o->sex);
}

int main()
{
	struct Student st;
	
	InputStudent(&st);  //�Խṹ��������� 
	
	OutputStudent(&st); //�Խṹ�������� 
	
	return 0;
}

