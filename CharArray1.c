main()
{
	char s[100],c;
	int i=0;
	do
	{
		scanf("%c",&c);
		if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
	    {
			s[i]=c;
			i++;
		}
	}
	while (c!='.');
	s[i]='\0';
	printf("%s\n",s);
}