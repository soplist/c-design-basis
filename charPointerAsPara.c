void copy_s(char *from,char *to)
{
    for(;*from!='\0';from++,to++)
		*to=*from;
	*to='\0';
}

main()
{
	char *string1="i am a teacher.";
	char *string2="you are a student.";
	printf("string1=%s\nstring2=%s\n",string1,string2);
	copy_s(string2,string1);
    printf("string1=%s\nstring2=%s\n",string1,string2);
}