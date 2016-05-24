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
    void list(char student[20]);
	struct stud_type wa={1,"wangkang",30,'m'};
	list(wa.name);
}
void list(char student[20])
{
    printf("%s\n",student);
}
