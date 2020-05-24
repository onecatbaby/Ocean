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
	p->age = 18;  // 等价于 (*p).age 
	strcpy(p->name, "山大王");
	strcpy(p->sex, "女");
} 

void OutputStudent(struct Student * o)
{
	printf("%s %d %s", o->name ,o->age ,o->sex);
}

int main()
{
	struct Student st;
	
	InputStudent(&st);  //对结构体变量输入 
	
	OutputStudent(&st); //对结构体变量输出 
	
	return 0;
}

