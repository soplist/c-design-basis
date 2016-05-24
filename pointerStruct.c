#include <string.h>

struct student
{
	long num;
	char name[20];
	char sex;
	float score;
};

main()
{
    struct student stu1;
    struct student *p;
	p=&stu1;
	stu1.num=1;
	strcpy(stu1.name,"wangkang");
	stu1.sex='M';
	stu1.score=89.5;
	printf("num:%ld\tname:%s\tsex:%c\tscore:%f\n",stu1.num,stu1.name,stu1.sex,stu1.score);
	printf("num:%ld\tname:%s\tsex:%c\tscore:%f\n",(*p).num,(*p).name,(*p).sex,(*p).score);
}