main()
{
	char a[]="i am a girl.",b[20],*p1,*p2;
	int j;
	p1=a;
	p2=b;
	for(;*p1!='\0';p1++,p2++)
	{
		*p2=*p1;
	}
	*p2='\0';
	printf("string a is:%s\n",a);
	printf("string b is:");
	for(j=0;b[j]!='\0';j++)
		printf("%c",b[j]);
	printf("\n");
}