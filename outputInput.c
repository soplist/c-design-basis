main(int argc,char *argv[])
{
    while(argc>1)
	{
		++argv;
		printf("%s\t",*argv);
		--argc;
	}
}