#include <stdio.h>
struct stud_type
{
	int num;
	char name[20];
	int age;
	char sex;
};
main()
{
	void list(struct stud_type student);
	struct stud_type wa={1,"wangkang",30,'m'};
	list(wa);
}
void list(struct stud_type student)
{
    printf("%d,%s,%d,%c\n",student.num,student.name,student.age,student.sex);
}
