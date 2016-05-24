struct student
{
	char num[7];
	char name[20];
	int scores[3];
	float average;
};

main()
{
    struct student stu[3];
    struct student *p;
    int m,n;
	float sum;
	for(m=0;m<3;m++)
	{
		printf("please input the no %d student's information.\n",m+1);
		printf("school_num name:\n");
		scanf("%s,%s",stu[m].num,stu[m].name);
		printf("scores of subject:\n");
		for(n=0;n<3;n++)
			scanf("%d",&stu[m].scores[n]);
	}
	p=stu;
	for(m=0;m<3;m++,p++)
    {
        sum=0;
		for(n=0;n<3;n++)
			sum+=stu[m].scores[n];
		p->average=sum/3.0;
		printf("%s's average is %5.2f.\n",p->name,p->average);
	}
}