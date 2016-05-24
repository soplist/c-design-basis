struct student
	{
		int num;
		char *name;
		char sex;
		float score;
	}boy1,boy2={1,"wangkang",'M',100};
main()
{
	boy1=boy2;
	printf("number=%d\nName=%s\n",boy1.num,boy1.name);
	printf("sex=%c\nscore=%f\n",boy1.sex,boy1.score);
}