main()
{
	struct student
	{
		char name[20];
		int num;
		float score;
	}stu={"wangkang",1,100};
	printf("%s\t%d\t%f\n",stu.name,stu.num,stu.score);
}